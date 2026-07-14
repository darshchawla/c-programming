#include <stdio.h>
int main()
{
    char arr[] = "Today's weather is very hot.";
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    return 0;
}