#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[30];
} pokemon;

void change(pokemon* p)
{
    (*p).attack = 120;
    p->attack = 120;
    p->hp = 100;
    p->speed = 120; // (*x).something = x-> something
    p->tier = 'S';
    strcpy(p->name, "Raichu");
    return;
}

int main()
{
    pokemon pikachu = {80, 90, 100, 'A', "Pikachu"};

    printf("\nName : %s\n", pikachu.name);
    printf("HP : %d\n", pikachu.hp);
    printf("Ataack : %d\n", pikachu.attack);
    printf("Sped : %d\n", pikachu.speed);
    printf("Tier : %c\n", pikachu.tier);

    change(&pikachu);

    printf("\nName : %s\n", pikachu.name);
    printf("HP : %d\n", pikachu.hp);
    printf("Ataack : %d\n", pikachu.attack);
    printf("Sped : %d\n", pikachu.speed);
    printf("Tier : %c\n", pikachu.tier);

    return 0;
}