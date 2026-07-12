#include <stdio.h>
int main()
{
    int a;
    printf("\nEnter first number : ");
    scanf("%d", &a);
    int b;
    printf("\nEnter second number : ");
    scanf("%d", &b);
    int product = a * b;
    printf("\nThe product of the two numbers is : %d\n", product);
    return 0;
}