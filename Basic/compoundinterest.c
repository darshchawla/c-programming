#include <stdio.h>
int main()
{
    float a;
    printf("\nEnter amount : ");
    scanf("%f", &a);
    float p;
    printf("\nEnter principal : ");
    scanf("%f", &p);
    float ci;
    ci = a - p;
    printf("\nThe compound interest is : %f\n", ci);
    return 0;
}