#include <stdio.h>
int fact(int n)
{
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    return product;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = fact(i);
        printf("The factorial of %d is : %d", i, a);
        printf("\n");
    }

    return 0;
}