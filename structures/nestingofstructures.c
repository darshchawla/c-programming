#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } pokemon;

    typedef struct legendarypokemon
    {
        pokemon normal;
        char ability[100];
    } legendarypokemon;

    typedef struct godpokemon
    {
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability, "Turns Anyone to Stone");
    arceus.legend.normal.attack = 500;
    arceus.legend.normal.hp = 350;
    strcpy(arceus.legend.normal.name, "Arceus");
    arceus.legend.normal.speed = 490;
    arceus.legend.normal.tier = 'G';

    printf("\nName : %s\n", arceus.legend.normal.name);
    printf("Special Attack : %d\n", arceus.specialattack);
    printf("Ability : %s\n", arceus.legend.ability);
    printf("HP : %d\n", arceus.legend.normal.hp);
    printf("Attack : %d\n", arceus.legend.normal.attack);
    printf("Speed : %d\n", arceus.legend.normal.speed);
    printf("Tier : %c\n", arceus.legend.normal.tier);

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability, "Pressure");
    mewtwo.normal.hp = 150;
    mewtwo.normal.attack = 180;
    strcpy(mewtwo.normal.name, "Mewtwo");
    mewtwo.normal.speed = 180;
    mewtwo.normal.tier = 'S';

    printf("\nName : %s\n", mewtwo.normal.name);
    printf("Ability : %s\n", mewtwo.ability);
    printf("HP : %d\n", mewtwo.normal.hp);
    printf("Attack : %d\n", mewtwo.normal.attack);
    printf("Speed : %d\n", mewtwo.normal.speed);
    printf("Tier : %c\n", mewtwo.normal.tier);

    pokemon pikachu;
    pikachu.hp = 120;
    pikachu.attack = 150;
    strcpy(pikachu.name, "Pikachu");
    pikachu.speed = 150;
    pikachu.tier = 'A';

    printf("\nName : %s\n", pikachu.name);
    printf("HP : %d\n", pikachu.hp);
    printf("Attack : %d\n", pikachu.attack);
    printf("Speed : %d\n", pikachu.speed);
    printf("Tier : %c\n", pikachu.tier);

    return 0;
}