#include <stdio.h>
int main()
{
    int r;
    printf("\nEnter number of rows : ");
    scanf("%d", &r);
    int c;
    printf("\nEnter number of columns : ");
    scanf("%d", &c);
    printf("\nEnter all the elements : \n");
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    printf("\nThe maximum value in 2d array is : %d ", max);
    return 0;
}