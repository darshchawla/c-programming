#include <stdio.h>
#include <string.h>
int main()
{
    char s1[13] = "Hello World.";
    char s2[13];
    strcpy(s2, s1);
    // s2[0]='M';
    printf("%s\n%s", s1, s2);
    return 0;
}