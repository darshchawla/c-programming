#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    int arr[7];
    for (int i = 0; i <= 6; i++)
    {
        int a = i + 1;
        printf("\nEnter element number %d : ", a);
        scanf("%d", &arr[i]);
    }
    printf("\nThe numbers greater than %d are : ", x);
    for (int count = 0; count <= 6; count++)
    {
        if (arr[count] > x)
        {
            printf("%d ", arr[count]);
        }
    }
    return 0;
}