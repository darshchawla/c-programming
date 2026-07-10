#include <stdio.h>
int main()
{
    int a;
    printf("\nEnter age : ");
    scanf("%d", &a);
    if (a >= 18)
    {
        printf("\nThe person is eligible for driving license\n");
    }
    else
    {
        printf("\nThe person is not eligible for driving license\n");
    }
    return 0;
}