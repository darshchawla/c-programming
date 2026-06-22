#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    printf("the first fibo no is : %d\n", a);
    printf("the second fibo no is :%d\n", b);
    int sum = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("The %dth fibonacci : %d\n", i + 2, sum);
    }
    return 0;
}