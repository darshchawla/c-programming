#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    puts("\nEnter a string : ");
    scanf("%[^\n]s", str);
    puts("\nThe size of the string is : ");
    int size = 0;
    int a = 0;
    while (str[a] != '\0')
    {
        size++;
        a++;
    }
    printf("%d\n", size);
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("\nThe reverse string is : ");
    puts(str);
    return 0;
}