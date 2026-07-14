#include <stdio.h>
int main()
{
    char arr[5] = {'a', 't', 'l', 'a', 's'};
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);
    printf("%p\n", &arr[4]);
    return 0;
}