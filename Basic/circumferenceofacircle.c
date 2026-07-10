#include <stdio.h>
int main()
{
    float r;
    printf("Enter radius : ");
    scanf("%d", &r);
    float pi = 3.1415;
    float circumference = 2 * pi * r;
    printf("The circumference of the circle is : %d", circumference);
    return 0;
}