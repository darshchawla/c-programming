#include <stdio.h>
int main()
{
    int a;
    printf("\nEnter a number : ");
    scanf("%d", &a);
    int square;
    square = a * a;
    printf("\nThe square of %d is : %d\n", a, square);
    return 0;
}