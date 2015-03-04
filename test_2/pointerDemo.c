#include <stdio.h>

int main()
{
    int j = 10;
    int* p = &j;
    int k = *p;
    int n = k;
    printf("j %d p %p k %d n %d\n", j, p, k, n);

    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int* pa = a;
    int* enda = a + 9;
    while (pa < enda) printf("Next a is %d\n", *pa++);

    p = a;
    for (int x = 0; x < 10; x++)
    {
        printf("p[%d] is %d\n", x, p[x]);
    }
    printf("%d\n", *p == p[0]); // Same thing!
    
    p++;
    printf("\n%d\n", p[-1]);
}
