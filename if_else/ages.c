#include <stdio.h>
int main ()
{
    int r;
    printf("Enter Ram's age : ");
    scanf("%d",&r);
    int s;
    printf("Enter Shyam's age : ");
    scanf("%d",&s);
    int a;
    printf("Enter Ajay's age : ");
    scanf("%d",&a);
    if(r<s && r<a){
        printf("%d is youngest",r);
    }
    if(s<r && s<a){
        printf("%d is youngest",s);
    }
    if(a<r && a<s){
        printf("%d is youngest",a);
    }
    return 0;
}