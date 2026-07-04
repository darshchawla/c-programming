#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("\nEnter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        int a = i + 1;
        printf("\nEnter element number %d : ", a);
        scanf("%d", &arr[i]);
    }
    int x;
    bool flag = false;
    int b = -1;
    printf("\nEnter a number : ");
    scanf("%d", &x);
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            b = i;
            break;
        }
    }
    if (flag == false)
    {
        printf("\n%d is not present in the array", x);
    }
    else
    {
        printf("\n%d is present in the array and its index is %d", x, b);
    }
    return 0;
}