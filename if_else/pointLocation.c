#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates : ");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x==0 && y==0){
        printf("The point is origin");
    }
    else if(y==0){
        printf("Lies on x-axis ");
    }
    else{
        printf("Lies on y-axis");
    }
    return 0;
}