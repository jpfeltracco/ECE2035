Misc, Factorial, and If Demo
============================
``` c
#include <stdio.h>

int length = 10;
int j; // j == 0 because declaring global var, otherwise j == whatevs in mem
unsigned Index = 0; // Use unsigned for index b/c never < 0

float kf = 2.0 / 4.3; // 32-bit decimal number
double kd = 2.0 / 4.3; // 64-bit decimal number

float af = 2 / 4; // mf == 0 b/c integer division
float bf = 2.0 / 4; // mf = 0.5 b/c implicit cast from 4 to 4.0
float cf = 2.0 / 4.0; // mf == 0.5; good form to put '.0' on both

char ac = 'a'; // Use single quotes with type char; 8 bits only
char bc = 'b'; // b will be stored in same 32-bit chunk as ac
char cc = 0x61; // will store 'a' in cc

char st[] = "This is a text"; // char array, aka string (no real string datatype in c)
// "<string> always have terminator char so st takes up 15 8-bits, not 14

unsigned long Fact(unsigned n)
{
	unsigned long f = 1;
    while (n > 1)
	{
		f *= n;
		n--;
	}
	return(f);
}

void istuff()
{
    int i = 5;
    int a = i++; // a == 5
    i = 5;
    int b = ++i; // b == 6
    printf("a: %i, b: %i\n", a, b);
}

void ifdemo() 
{
    int k = 0;
    int j = 5;
    int m = 10;
    if (k == 1 && j == 8 || m == 10) // is this true or false? True because && = * and || = +
    // should instead add parens to make it clear
    {
        printf("It was true!");
    } else if (true) 
    {
        // Rather than stacking like a madman, use else if, (it's not a keyword though!)
    } else 
    {
        printf("It wasn't true!");
    }
}

int main() {
    unsigned i;
    for (i = 0; i < 20; i++)
    {
        unsigned long f = Fact(i);
        printf("Factorial %u is %lu\n", i, f);
    }
    istuff();
	return 0;
}
```
