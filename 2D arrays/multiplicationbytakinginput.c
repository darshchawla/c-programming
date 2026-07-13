#include <stdio.h>
int main()
{

    // first matrix order
    int m;
    printf("\nEnter number of rows of first matrix : ");
    scanf("%d", &m);
    int n;
    printf("\nEnter number of columns of first matrix : ");
    scanf("%d", &n);
    int a[m][n];
    // input the first matrix
    printf("\nEnter elements of first matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // second matrix order
    int p;
    printf("\nEnter number of rows of second matrix : ");
    scanf("%d", &p);
    int q;
    printf("\nEnter number of columns of second matrix : ");
    scanf("%d", &q);
    int b[p][q];
    // input the second matrix
    printf("\nEnter elements of second matrix : \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (n != p)
    {
        printf("\nThe matrices cannot be multiplied.\n");
    }
    else
    {
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] = res[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("\nThe resultant matrix is : \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}