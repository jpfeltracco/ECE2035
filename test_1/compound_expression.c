int i = 10;
int j = 100;
int result;

int main()
{
    if (i > 0 && j < 100) // Remember short circuiting
        result = 1;
    else
        result = 0;
}
