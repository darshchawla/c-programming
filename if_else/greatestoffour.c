#include <stdio.h>
int main ()
{
    int a,b,c,d;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);
    printf("Enter fourth number : ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("%d is greatest",a);
    }
    if(b>a && b>c && b>d){
        printf("%d is greatest",b);
    }
    if(c>a && c>b && c>d){
        printf("%d is greatest ");
    }
    if(d>a && d>b && d>c){
        printf("%d is greatest");
    }
    return 0;
}