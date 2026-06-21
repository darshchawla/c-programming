#include <stdio.h>
int main()
{
    // for (int i = 1; i <= 100; i++)
    // {
    //     if (i%2==0)
    //     {
    //        continue; // continue ka matlab loop ke us round ko skip karo, is condition me even numbers skip honge, odd numbers hi print honge
    //     }
    //     printf("%d ", i);
    // }  
    for (int i=1;i<=100;i++){
        if(i%2!=0){
          continue;
        }
        printf("%d ",i);
    }
    return 0;
}