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
    int minimumrow = 0;
    int maximumrow = r - 1;
    int minimumcolumn = 0;
    int maximumcolumn = c - 1;
    int tne = r * c;
    int count = 0;
    while (count < tne)
    {
        for (int j = minimumcolumn; j <= maximumcolumn; j++)
        {
            printf("%d ", a[minimumrow][j]);
            count++;
        }
        minimumrow++;
        if (count >= tne)
            break;
        for (int i = minimumrow; i <= maximumrow; i++)
        {
            printf("%d ", a[i][maximumcolumn]);
            count++;
        }
        maximumcolumn--;
        if (count >= tne)
            break;
        for (int j = maximumcolumn; j >= minimumcolumn; j--)
        {
            printf("%d ", a[maximumrow][j]);
            count++;
        }
        maximumrow--;
        if (count >= tne)
            break;
        for (int i = maximumrow; i >= minimumrow; i--)
        {
            printf("%d ", a[i][minimumcolumn]);
            count++;
        }
        minimumcolumn++;
    }
    return 0;
}