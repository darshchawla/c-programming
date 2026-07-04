#include <stdio.h>
int main()
{
    float a;
    printf("\nEnter first number : ");
    scanf("%f", &a);
    float b;
    printf("\nEnter second number : ");
    scanf("%f", &b);
    float c;
    printf("\nEnter third number : ");
    scanf("%f", &c);
    float average;
    average = (a + b + c) / 3;
    printf("\nThe average of the three number is : %f\n", average);
    return 0;
}