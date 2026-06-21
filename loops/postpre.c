#include <stdio.h>
int main(){
    int x = 5;
    printf("%d\n",x);
    printf("%d\n",++x); // x++ means -> use x, then increment.
    // ++x means -> first increment, then use x.
    return 0;
}