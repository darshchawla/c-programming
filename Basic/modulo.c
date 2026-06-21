#include <stdio.h>
int main ()
{
    float x;
    printf("Enter The Decimal Number: ",x);
    scanf("%f",&x);
    int y;
    y = x;
    float z = x - y;
    printf("Your Fractional Part Of This Number Is: %f",z);
    return 0;
}