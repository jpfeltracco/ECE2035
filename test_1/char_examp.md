Char and Args Demo
==================

``` c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) // argv[0] will be prog name, argv[1] file name
{
    if (argc < 2)
    {
        printf("Error...no file name specified\n");
        exit(0);
    }

    FILE *f;
    f = fopen(argv[1], "r");
    if (f == NULL)
    {
        printf("Can't open file %s\n", argv[1]);
        exit(0);
    }
    
    int ch;

    while ((ch = fgetc(f)) != EOF) // Stores char in lower 8 bits of ch
    {
        printf("%c", ch);
    }
    return(0);
}
```
