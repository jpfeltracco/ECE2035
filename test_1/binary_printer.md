Binary Printer 2.0
==================

``` c
#include <stdio.h>
// Another version online with slightly different loop
void PrintBin(unsigned j)
{
    printf("%d is ", j);
    int shiftcount = 31;
    while (shiftcount >= 0)
    {
        unsigned k = (j >> shiftcount);
        unsigned k2 = k & 1;

        printf("%d", k2);
        shiftcount--;
    }
    printf("\n");
}

int main()
{
    unsigned i = 0;
    for (; i < 20; ++i)
    {
        PrintBin(i);
    }
    return 0;
}
```

