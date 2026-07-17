#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    pokemon arr[3];
    for (int i = 0; i < 3; i++)
    {
        int a = i + 1;
        printf("\nEnter name of pokemon %d : ", a);
        scanf(" %[^\n]s", arr[i].name);
        printf("Enter attack of pokemon %d : ", a);
        scanf("%d", &arr[i].attack);
        printf("Enter HP of pokemon %d : ", a);
        scanf("%d", &arr[i].hp);
        printf("Enter speed of pokemon %d : ", a);
        scanf("%d", &arr[i].speed);
        printf("Enter tier of pokemon %d : ", a);
        scanf(" %c", &arr[i].tier);
    }
    for (int i = 0; i < 3; i++)
    {
        int a = i + 1;
        printf("\nThe name of pokemon %d is : %s\n", a, arr[i].name);
        printf("The attack of pokemon %d is : %d\n", a, arr[i].attack);
        printf("The HP of pokemon %d is : %d\n", a, arr[i].hp);
        printf("The speed of pokemon %d is : %d\n", a, arr[i].speed);
        printf("The tier of pokemon %d is : %c\n", a, arr[i].tier);
    }

    return 0;
}