#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int a = fibonacci(n - 1);
    int b = fibonacci(n - 2);
    int recAns = a + b;
    return recAns;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int f = fibonacci(n);
    printf("The fibonacci number of %d is : %d", n, f);
    return 0;
}