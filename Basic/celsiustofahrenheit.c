#include <stdio.h>
int main()
{
    float c;
    printf("Enter celsius : ");
    scanf("%f", &c);
    float f;
    f = 9.0 / 5 * c + 32;
    printf("%f celsius is : %f fahrenheit", c, f);
    return 0;
}