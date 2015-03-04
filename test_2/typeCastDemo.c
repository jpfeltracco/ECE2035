#include <stdio.h>

int main()
{
    double d = 10.0;
    double* pd = &d;
    int* pI = (int*) pd;
    printf("%d %d\n", *pI, pI[1]);
}
