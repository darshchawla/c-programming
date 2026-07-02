#include <stdio.h>
int main (){
    int arr[7];
    for (int i = 0; i <= 6; i++)
    {
        int a = i + 1;
        printf("\nEnter element number %d : ", a);
        scanf("%d", &arr[i]);
    }
    int sumEven = 0;
    int sumOdd = 0;
    for(int i=0;i<=6;i++){
        if(i%2==0){
            sumEven = sumEven + arr[i];
        }
        if(i%2!=0){
            sumOdd = sumOdd + arr[i];
        }
    }
    int result = sumEven - sumOdd;
    printf("The difference between the sum of elements at even indices to the sum of elements at odd indices is : %d",result);
    return 0;
}
