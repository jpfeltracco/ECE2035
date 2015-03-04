        add     $fp, $sp, $zero # move FP to top of stack
        addi    $sp, $sp, -4    # make room for 1 local (R)

        addi    $sp, $sp, -20   # make room for RA, FP, I, J, RV
        sw      $fp, 16($sp)    # preserve current FP
        sw      $ra, 12($sp)    # preserve current RA
        addi    $1, $zero, 25   # will be first input to Bar
        sw      $1, 8($sp)      # push Bar's first input (I)
        addi    $1, $zero, 33   # will be 2nd input ot Bar
        sw      $1, 4($esp)     # push Bar's second input

        jal     Bar
        `
    
