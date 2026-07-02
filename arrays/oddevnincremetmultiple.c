#include <stdio.h>
int main()
{
    int arr[7];
    for (int i = 0; i <= 6; i++)
    {
        int a = i + 1;
        printf("\nEnter element number %d : ", a);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] = arr[i] * 2;
        }
        if (i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
        }
    }
    printf("\n");
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}