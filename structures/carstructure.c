#include <stdio.h>
#include <string.h>
int main()
{
    struct cars
    {
        char name[50];
        float price;
        int modelyear;
    } a, b;

    strcpy(a.name, "Mercedes");
    a.price = 17550000;
    a.modelyear = 2025;

    printf("\nThe name of the car a is : %s\n", a.name);
    printf("\nThe price of the car a is  : %f\n", a.price);
    printf("\nmodel year of car a  is : %d\n", a.modelyear);

    strcpy(b.name, "BMW");
    b.price = 15000000;
    b.modelyear = 2025;

    printf("\nThe name of the car b is : %s\n", b.name);
    printf("\nThe price of the car b is : %f\n", b.price);
    printf("\nModel year of car b is : %d\n", b.modelyear);

    return 0;
}