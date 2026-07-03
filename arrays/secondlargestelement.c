#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7];
    for (int i = 0; i <= 6; i++)
    {
        int a = i + 1;
        printf("\nEnter element number %d : ", a);
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    int secondmax = INT_MIN;
    for (int i = 0; i <= 6; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] != max && secondmax < arr[i])
        {
            secondmax = arr[i];
        }
    }
//     for (int i = 0; i <= 6; i++)
//     {
//         if (max < arr[i])
//         {
//             secondmax = max;
//             max = arr[i];
//         }
//         else if (secondmax < arr[i] && max != arr[i])
//         {
//             secondmax = arr[i];
//         }
//     }
printf("\nThe second largest element is : %d\n ", secondmax);
return 0;
}