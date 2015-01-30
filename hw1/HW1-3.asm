# HW1-3
# Student Name: Jeremy Feltracco
# Date: 2015-01-15
#
# This program computes and prints the span of a set of ten integers Set.

.data
Set:  .word 9, 17, -7, 3, -27, 25, 42, 26, 8, -60
Span: .alloc 1

.text
		lw $1, Set($0)			# Max
		lw $2, Set($0)			# Min

		addi $3, $0, 4			# index

		addi $4, $0, 40			# size of array

Loop:	slt $6, $3, $4
		beq $6, $0, End			# branch if index > size of arr
		
		lw $5, Set($3)			# Val we are checking

		slt $6, $1, $5			# val > max
		beq $6, $0, Min
		add $1, $5, $0

Min:	slt $6, $5, $2			# val < min
		beq $6, $0, Inc
		add $2, $5, $0

Inc:	addi $3, $3, 4
		j Loop
	
End:	sub $6, $1, $2			# R6 contains the span
		sw $6, Span($0)
		jr $31	     			# return to OS


