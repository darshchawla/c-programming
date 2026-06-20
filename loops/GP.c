#include <stdio.h>
int main (){
    // int n;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    // // 1 2 4 8 16 32 ..... upto n number of terms 
    // int a = 1;
    // for(int i=1;i<=n;i++){
    //     printf("%d ",a);
    //     a = a * 2;
    // }
    // int n;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    // int a = 3;
    // for(int i=1;i<=n;i++){
    //     printf("%d ",a);
    //     a = a * 4;
    // }
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    float a = 100;
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a = a / 2;
    }
    return 0;
}