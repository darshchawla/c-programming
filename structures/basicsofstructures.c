#include <stdio.h>
int main()
{
    struct pokemon
    { // user defined data type
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    printf("\nEnter attack of pikachu : ");
    scanf("%d", &pikachu.attack);
    printf("\nEnter hp of pikachu : ");
    scanf("%d", &pikachu.hp);
    printf("\nEnter speed of pikachu : ");
    scanf("%d", &pikachu.speed);
    printf("\nEnter tier of pikachu : ");
    scanf(" %c", &pikachu.tier);

    printf("\nThe attack of pikachu is : %d\n", pikachu.attack);
    printf("\nThe hp of pikachu is : %d\n", pikachu.hp);
    printf("\nThe speed of pikachu is : %d\n", pikachu.speed);
    printf("\nThe tier of pikachu is : %c\n", pikachu.tier);

    struct pokemon charizard;
    printf("\nEnter attack of charizard : ");
    scanf("%d", &charizard.attack);
    printf("\nEnter hp of charizard : ");
    scanf("%d", &charizard.hp);
    printf("\nEnter speed of charizard : ");
    scanf("%d", &charizard.speed);
    printf("\nEnter tier of charizard : ");
    scanf(" %c", &charizard.tier);

    printf("\nThe attack of charizard is : %d\n", charizard.attack);
    printf("\nThe hp of charizard is : %d\n", charizard.hp);
    printf("\nThe speed of charizard is : %d\n", charizard.speed);
    printf("\nThe tier of charizard is : %c\n", charizard.tier);

    struct pokemon mewtwo;
    printf("\nEnter attack of mewtwo : ");
    scanf("%d", &mewtwo.attack);
    printf("\nEnter hp of mewtwo : ");
    scanf("%d", &mewtwo.hp);
    printf("\nEnter speed of mewtwo : ");
    scanf("%d", &mewtwo.speed);
    printf("\nEnter tier of mewtwo : ");
    scanf(" %c", &mewtwo.tier);

    printf("\nThe attack of mewtwo is : %d\n", mewtwo.attack);
    printf("\nThe hp of mewtwo is : %d\n", mewtwo.hp);
    printf("\nThe speed of mewtwo is : %d\n", mewtwo.speed);
    printf("\nThe tier of mewtwo is : %c\n", mewtwo.tier);

    return 0;
}