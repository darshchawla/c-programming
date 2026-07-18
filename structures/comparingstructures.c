#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct date
    {
        int date;
        int month;
        int year;
    } date;

    date a, b;

    printf("\nEnter first date : ");
    scanf("%d", &a.date);
    printf("Enter first month : ");
    scanf("%d", &a.month);
    printf("Enter first year : ");
    scanf("%d", &a.year);

    printf("\nEnter second date : ");
    scanf("%d", &b.date);
    printf("Enter second month : ");
    scanf("%d", &b.month);
    printf("Enter second year : ");
    scanf("%d", &b.year);

    bool flag = true;

    if (a.date != b.date)
        flag = false;
    if (a.month != b.month)
        flag = false;
    if (a.year != b.year)
        flag = false;

    if (flag == true)
    {
        printf("\nThe dates are same.\n");
    }
    else
    {
        printf("\nThe dates are different.\n");
    }
    return 0;
}