#include <stdio.h>

int main()
{
    int z = 0x12345678;
    char* cp = (char*) &z;
    printf("%d\n", *cp);
    // Little Indian -> least sig first, most sig last
    // Have to switch things around when communicating over network
}
