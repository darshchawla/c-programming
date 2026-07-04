#include <stdio.h>
int main (){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    int square = n*n;
    int cube = n*n*n;
    printf("The square of the given number is : %d\n",square);
    printf("The cube of the given number is : %d\n",cube);
    return 0;
}