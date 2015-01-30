Pointers
=========

* Pointers store the addresses of variables
* Can use * to both create a pointer and get value pointed to.

``` c
#include <stdio.h>
int main()
{
    int j = 10;
    int *p = &j; // & is the address of operator
    int k = *p; // Read the value at the address specified by p
    int n = k; // Store that value in another variable

    printf("j: %d p: %p k: %d n %d\n", j, p, k, n);
    // j = 10, p = 0x(some hex), k = 10 n = 10

    p = 0; // Logically means doesn't point to anything real
    printf("p: %p\n", p); // Will seg fault, use gdb to figure out issue
}
```
