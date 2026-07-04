#include <stdio.h>
int main()
{
    int a;
    printf("Enter units consumed : ");
    scanf("%d", &a);
    float bill;
    if (a <= 100)
    {
        bill = a * 2;
    }
    else if (a <= 200)
    {
        bill = a * 3;
    }
    else
    {
        bill = a * 5;
    }
    printf("The electricity bill is : %f", bill);
    return 0;
}