#include <stdio.h>
int main()
{
    int arr[7];
    int brr[7];
    for (int i = 0; i <= 6; i++)
    {
        int a = i + 1;
        printf("\nEnter element number %d : ", a);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 6; i++)
    {
        brr[i] = arr[6 - i];
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", brr[i]);
    }
    return 0;
}