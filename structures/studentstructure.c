#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        float rollnumber;
        int marks;
    } a, b;

    strcpy(a.name, "Rohit Sharma");
    a.rollnumber = 75;
    a.marks = 95;

    printf("\nThe name of the student a is : %s\n", a.name);
    printf("\nThe roll number of the student a is  : %f\n", a.rollnumber);
    printf("\nMarks scored by student a is : %d\n", a.marks);

    strcpy(b.name, "Virat Kohli");
    b.rollnumber = 76;
    b.marks = 97;

    printf("\nThe name of the book b is : %s\n", b.name);
    printf("\nThe roll of the student b is : %f\n", b.rollnumber);
    printf("\nMarks scored by student b is : %d\n", b.marks);

    return 0;
}