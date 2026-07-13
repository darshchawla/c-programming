#include <stdio.h>
int main()
{
    int r;
    printf("\nEnter number of rows : ");
    scanf("%d", &r);
    int c;
    printf("\nEnter number of columns : ");
    scanf("%d", &c);
    int a[r][c];
    printf("\nEnter all the elements : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", a[i][j]);
            }
        }
        else
        {
            for (int j = c - 1; j >= 0; j--)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}