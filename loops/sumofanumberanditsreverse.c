#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int r = 0;
    int lastDigit = 0;
    int i = n;
    while(n!=0){
        lastDigit = n % 10;
        r = r * 10 + (n%10);
        n = n / 10;
    }
    int sum;
    sum = i + r;
    printf("The sum of the given number and its reverse is %d",sum);
    return 0;
}