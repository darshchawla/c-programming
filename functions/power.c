#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter base : ");
    scanf("%d", &a);
    int b;
    printf("Enter exponent : ");
    scanf("%d", &b);
    float c = pow(a, b);
    printf("%d raised to the power %d is : %f", a, b, c);
    return 0;
}