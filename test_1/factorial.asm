
.text
        addi $4, $0, 10
        jal Fact # alters value of $31, must save $31 elsewhere
        # more code here
Fact:   # code here
        jr $31
