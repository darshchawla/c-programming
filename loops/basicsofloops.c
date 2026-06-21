#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){ // int i=1 -> initialisation, i<=n -> condition, i=i+1 -> increment updation 
        printf("Hello world\n");
    }
    return 0;
}