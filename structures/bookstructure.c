#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        float price;
        int numberofpages;
    } a, b, c;

    strcpy(a.name, "Secret Seven");
    a.price = 411.5;
    a.numberofpages = 100;

    printf("\nThe name of the book a is : %s\n", a.name);
    printf("\nThe price of the book is a : rupees %f\n", a.price);
    printf("\nNumber of pages in the book a are : %d\n", a.numberofpages);

    strcpy(b.name, "Harry Potter");
    b.price = 775;
    b.numberofpages = 973;

    printf("\nThe name of the book b is : %s\n", b.name);
    printf("\nThe price of the book b is : rupees %f\n", b.price);
    printf("\nNumber of pages in the book b are : %d\n", b.numberofpages);

    strcpy(c.name, "Diary of a Wimpy Kid");
    c.price = 379;
    c.numberofpages = 462;

    printf("\nThe name of the book c is : %s\n", c.name);
    printf("\nThe price of the book is c : rupees %f\n", c.price);
    printf("\nNumber of pages in the book c are : %d\n", c.numberofpages);

    return 0;
}