.data
i:      .word 10
j:      .word 99
result: .word 0

.text
        lw $1, i($0)
        lw $2, j($0)
        slti $3, $1, 1 # $3 = 1 if i < 0, $3 = 0 if i > 0
        bne $3, $0, Else1
        slti $3, $2, 100 # $3 = 1 if j < 100
        beq $3, $0, Else1 # assert that i > 0 && j < 100
        addi $4, $0, 1
        sw $4, result($0)
        j Done
Else1:  addi $4, $0, 0
        sw $4 result($0)
Done:   jr $31
