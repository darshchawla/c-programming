#include <stdio.h>
#include <string.h>
int main()
{
    char s1[12] = "Darsh";
    char s2[] = "Chawla";
    strcat(s1, s2);
    printf("%s", s1);
    return 0;
}