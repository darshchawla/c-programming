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
    if(r<s){
        if(r<a)
        printf("%d is youngest",r);
        else // r>a
            printf("%d is youngest",a);
    }
    else{ // 
        if(s<a)
            printf("%d is youngest",s);
        else 
            printf("%d is youngest",a);
    }
    return 0;
}