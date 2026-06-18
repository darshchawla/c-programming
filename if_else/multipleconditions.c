#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n>5){
        printf("The number is greater than 5");
    }
    else{
        printf("The number is not greater than 5");
    }
    return 0;
}