#include <stdio.h>
int main()
{
    int s;
    printf("\nEnter the size of the array : ");
    scanf("%d", &s);
    char arr[s];
    for (int i = 0; i <= s - 1; i++)
    {
        int a = i + 1;
        printf("\nEnter element number %d : ", a);
        scanf(" %c", &arr[i]);
    }
    printf("\nThe array of size %d is : ", s);
    for (int i = 0; i <= s - 1; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
    return 0;
}