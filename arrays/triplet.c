#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    int arr[8];
    for (int i = 0; i <= 7; i++)
    {
        int a = i + 1;
        printf("\nEnter element number %d : ", a);
        scanf("%d", &arr[i]);
    }
    int totalTriplets = 0;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            for (int k = j + 1; k <= 7; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    totalTriplets++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("The total number of triplets are : %d", totalTriplets);
    return 0;
}