#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        int a = i + 1;
        printf("\nEnter element number %d : ", a);
        scanf("%d", &arr[i]);
    }
    int product = 1;
    for (int i = 0; i <= 4; i++)
    {
        product = product * arr[i];
    }
    printf("The product of all the elements in the given array is : %d ", product);
    return 0;
}