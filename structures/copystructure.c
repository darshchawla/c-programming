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
    pokemon a, b;

    a.attack = 100;
    a.hp = 90;
    a.speed = 100;
    a.tier = 'A';
    strcpy(a.name, "Blastoise");

    // b.attack=a.attack;
    // b.hp=a.hp;
    // b.speed=b.speed;
    // b.tier=a.tier;
    // strcpy(b.name,a.name);

    b = a;

    strcpy(b.name, "Pikachu");

    printf("Attack : %d\n", b.attack);
    printf("HP : %d\n", b.hp);
    printf("Speed : %d\n", b.speed);
    printf("Tier : %c\n", b.tier);
    printf("Name : %s\n", b.name);

    return 0;
}