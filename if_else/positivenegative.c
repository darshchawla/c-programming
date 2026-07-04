#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n>0){
        printf("The given number is positive");
    }
    if(n<0){
        printf("The given number is negative");
    }
    if(n==0){
        printf("%d is neither positive nor negative",n);
    }
    return 0;
}