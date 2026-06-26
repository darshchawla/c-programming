#include <stdio.h>
void england()
{
    printf("You are in england\n"); // 6 
    return; // 7
}
void australia()
{
    printf("You are in Australia\n"); // 4
    england(); //  calling England // 5
    return; // 8
}
void india()
{
    printf("You are in India\n"); // 2
    australia(); // calling Australia // 3
    return; // 9
}
int main()
{
    india(); // calling India // 1
    return 0; // 10
}