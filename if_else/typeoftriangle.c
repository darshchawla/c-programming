#include <stdio.h>
int main()
{
    float a;
    printf("\nEnter first side : ");
    scanf("%f", &a);
    float b;
    printf("\nEnter second side : ");
    scanf("%f", &b);
    float c;
    printf("\nEnter third side : ");
    scanf("%f", &c);
    if (a == b && b == c && a == c)
    {
        printf("\nIt is equilateral triangle\n");
    }
    else if (a != b && b != c && a != c)
    {
        printf("\nIt is scalene triangle\n");
    }
    else
    {
        printf("\nIt is isosceles triangle\n");
    }
    return 0;
}