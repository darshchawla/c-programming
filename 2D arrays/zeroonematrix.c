#include <stdio.h>
int main()
{
    int r;
    printf("\nEnter number of rows : ");
    scanf("%d", &r);
    int c;
    printf("\nEnter number of columns : ");
    scanf("%d", &c);
    printf("\nEnter all the elements\n");
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxCount = 0;
    int maxIndex = -1;
    for (int i = 0; i < r; i++)
    {
        int count = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (maxCount < count)
        {
            maxCount = count;
            maxIndex = i;
        }
    }
    printf("\n");
    printf("The maximum number of times 1 is repeating in a row is : %d\n",maxCount);
    printf("\nThe index number is : %d\n", maxIndex);
    return 0;
}