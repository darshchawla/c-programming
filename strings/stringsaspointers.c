#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello World\n";
    char* ptr = str;
    ptr = "Hello Universe\n";
    printf("%s", str);
    printf("%s", ptr);
    char* p = str;
    *p = 'P';
    printf("%s", str);
    return 0;
}