#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The alphabet is uppercase");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The alphabet is lowercase");
    }
    else
    {
        printf("%c is not an alphabet", ch);
    }
    return 0;
}