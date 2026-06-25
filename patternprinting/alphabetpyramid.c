#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        int b = 1;
        for (int j = 1; j <= a; j++)
        {
            int d = b + 64;
            char ch = (char)d;
            printf("%c", ch);
            b++;
        }
        a = a + 2;
        printf("\n");
    }
    return 0;
}