#include <stdio.h>

int Sub2(int k)
{
    printf("%d", k);
    return k;
}

int Sub3(int i, int j, int k)
{
    return 0;
}

int main()
{
    Sub3(Sub2(1), Sub2(2), Sub2(3));
}
