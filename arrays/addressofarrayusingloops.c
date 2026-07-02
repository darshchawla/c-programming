#include <stdio.h>
int main (){
    int arr[5] = {5,7,3,7,9};
    for(int i =0;i<=4;i++){
        printf("%p\n",&arr[i]);
    }
    return 0;
}