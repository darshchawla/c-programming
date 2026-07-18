#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct cricketer
    {
        char name[20];
        int age;
        int numberofmatches;
        int totalruns;
        float averageruns;
    } cricketer;

    cricketer arr[5];
    for (int i = 0; i < 5; i++)
    {
        int a = i + 1;
        printf("\nEnter the name of cricketer %d : ", a);
        scanf(" %[^\n]s", arr[i].name);
        printf("Enter the age of cricketer %d : ", a);
        scanf("%d", &arr[i].age);
        printf("Enter number of matches played by cricketer %d : ", a);
        scanf("%d", &arr[i].numberofmatches);
        printf("Enter total number of runs scored by cricketer %d : ", a);
        scanf("%d", &arr[i].totalruns);
        printf("Enter the average runs of cricketer %d : ", a);
        scanf("%f", &arr[i].averageruns);
    }

    for (int i = 0; i < 5; i++)
    {
        int a = i + 1;
        printf("\nThe name of cricketer %d is : %s\n", a, arr[i].name);
        printf("The age of cricketer %d is : %d\n", a, arr[i].age);
        printf("The number of matches of cricketer %d is : %d\n", a, arr[i].numberofmatches);
        printf("The total number of runs scored by cricketer %d is : %d\n", a, arr[i].totalruns);
        printf("The average runs of cricketer %d is : %f\n", a, arr[i].averageruns);
    }

    return 0;
}