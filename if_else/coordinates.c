#include <stdio.h>
int main(){
    double x1,y1;
    printf("Enter first coordinate (x1,y1) : ");
    scanf("%d",&x1,y1);
    double x2,y2;
    printf("Enter second coordinate (x2,y2) : ");
    scanf("%d",&x2,y2);
    double x3,y3;
    printf("Enter third coordinate (x3,y3) : ");
    scanf("%d",&x3,y3);
    double m1 = (y2-y1)/(x2-x1);
    double m2 = (y3-y2)/(x3-x2);
    if(m1=m2){
        printf("The given three points lie on same line ");
    }
    else{
        printf("The given three points do not lie on same line ");
    }
    return 0;
}