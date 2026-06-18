#include <stdio.h>
int main ()
{
    int a;
    printf("Enter first side : ");
    scanf("%d",&a);
    int b;
    printf("Enter second side : ");
    scanf("%d",&b);
    int c;
    printf("Enter third side : ");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}