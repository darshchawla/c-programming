#include <stdio.h>
int main (){
    float l;
    printf("\nEnter length : ");
    scanf("%f",&l);
    float b;
    printf("\nEnter breadth : ");
    scanf("%f",&b);
    float area = l*b;
    printf("\nThe area of the rectangle is : %f\n",area);
    return 0;
}