#include <stdio.h>
int main (){
    int a;
    printf("Enter an age : ");
    scanf("%d",&a);
    if(a>=18){
        printf("The person is eligible to vote ");
    }
    else{
        printf("The person is not eligible to vote");
    }
}