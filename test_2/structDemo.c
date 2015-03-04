#include <stdio.h>

typedef struct {
    char first[20];
    char last[20];
    char middle;
    int salary;
} Employee_t;

void Init(Employee_t* e)
{
    e->first[0] = '\0'; // Can just 0 the first char
    e->last[0] = '\0';
    e->middle = '\0';
    e->salary = 10;
}

int main()
{
    Employee_t emp;
    Init(&emp);
    printf("first: %s, middle: %c, last: %s, salary: %d\n",
            emp.first, emp.middle, emp.last, emp.salary);
}
