Review
======

* No writing code on exam
* Plenty of reading code
* No syntax type questions
* Very short, very correct answers
* Not on test: load upper immediate,
* 4 Questions, 25 pts each
* C Stuff
    * Reading, interpreting code
```c
while (condition)  //possible to never enter it
for (int i = 0; i < NUM; i++) //could be written as a while loop
i++; // Can use either in for loop (returns original val)
++i; // Accomplishes the same thing (returns incremented val)
5; // This is actually valid code, evaluates 5 and does nothing
f(10); // similar sort of thing, function call with output ignored
do {} while (i < NUM); // Use if always want to execute at least once
```

* Assembly Stuff
    * Finding what value is in a register
    * Remember short circuiting expressions
    * Shifting and or-ing in order to get large values into a register
    * Can't load 32-bit immediate
``` asm
        sll $1, $1, 3 # multiply by 2^3 = 8
```
