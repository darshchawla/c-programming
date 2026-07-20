#include <stdio.h>
#include <string.h>
typedef union pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[30];
} pokemon;
int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "Pikachu");
    
    printf("\nName : %s\n", pikachu.name);
    printf("Attack : %d\n", pikachu.attack);
    printf("HP : %d\n", pikachu.hp);
    printf("Speed : %d\n", pikachu.speed);
    printf("Tier : %c\n", pikachu.tier);

    return 0;
}