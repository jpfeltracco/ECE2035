#include <stdio.h>

unsigned Fact(unsigned);

int main()
{
    unsigned k = Fact(10);
    unsigned k2 = Fact(2);
    unsigned k3 = Fact(3);
    return 0;
}

unsigned Fact(unsigned k)
{
    unsigned f = 1;
    while (k > 1)
    {
        f = f * k;
        --k;
    }
    return f;
}
