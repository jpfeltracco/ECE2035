Review
==========
* Structs, padding, how to declare, dereference, pointers
* Stack management, program uses stack, asks some questions about it (example of T-Square)
* Pointers
* Some assembly, final value of something, fix bugs (branch backwards or something)

``` asm
    # Assembly code
    mult $1, $2 # high goes into hi register, low into lo
    mflo $3
    mfhi $4
```

``` c
unsigned long j = 10;
unsigned long a[10] = {1, 2, 3, 4};

int main() {
    // Assume unsigned long = 64-bits usually
    unsigned long* p = &j;
    unsigned long* pa = a; // a (array) without [] means address, don't need &
    unsigned long* enda = a + 10; // enda = 1080; 10 units, each unit 8 bytes
    unsigned long bla = enda - a; // bla = 10, if enda and a were different types, then bug
    // Address of a[10] is 1080 (assume a == 1000), out of range

    while (pa < enda) printf("next a is %ld\n", *pa++); // Prints every element of a

    unsigned long k = *p; // k == 10
    p = a;
    p++; // P now points to 2, p[-1] == 1
    double d = 10.0; // Double is 64-bit
    double* pd = &d; // sizeof(pd) == 64-bits (8 bytes) (1 word), pointer is always 1 word
    int* pI = (int*) pd; // This is a type-cast, pd is a double* not an int*
    int z = 0x12345678;
    char* cp = (char*) &z; // printing cp++ in loop is 785623, %x prints hex
}
```

``` c
typdef struct {
    char first[20];
    char last[20];
    int salary;
    char middle;
} Employee_t;

void Init(Employee_t* e) {
    e->first[0] = 0;
    e->last[0] = 0;
    e->middle = 0;
    e->salary = 10;
}

int main()
{
    Employee_t emp;
    Init(&emp);
}
```
