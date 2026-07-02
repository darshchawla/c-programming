#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    int totalPairs = 0;
    int arr[8];
    for (int i = 0; i <= 7; i++)
    {
        int a = i + 1;
        printf("\nEnter element number %d : ", a);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalPairs++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("The total number of pairs are : %d", totalPairs);
    return 0;
}