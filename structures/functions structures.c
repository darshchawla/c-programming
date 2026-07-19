#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
} pokemon;

void fun(pokemon p)
{
    printf("%d", p.hp);
    return;
}

void change(pokemon p)
{
    p.attack = 120;
    p.hp = 90;
    p.speed = 110;
    return;
}
int main()
{
    pokemon pikachu;
    pikachu.hp = 80;
    pikachu.attack = 100;
    pikachu.speed = 100;
    change(pikachu);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);

    return 0;
}