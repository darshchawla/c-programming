#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    // scanf("%[^\n]s",str);
    gets(str);
    printf("\nYour input was : %s", str);
    return 0;
}