#include <stdio.h>
#include <string.h>
int main()
{
    struct Person
    {
        char name[50];
        int salary;
        int age;
    } a, b;

    strcpy(a.name, "Ram Kumar");
    a.age = 26;
    a.salary = 2700000;

    strcpy(b.name, "Rajan Sharma");
    b.age = 25;
    b.salary = 2200000;

    printf("\nThe name of person a is : %s\n", a.name);
    printf("\nThe age of person b is : %d\n", b.age);

    return 0;
}