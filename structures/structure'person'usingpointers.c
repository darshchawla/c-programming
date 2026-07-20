#include <stdio.h>
#include <string.h>
typedef struct person
{
    char name[20];
    int age;
    float weight;
} person;

void change(person* a){
    strcpy(a->name,"Rahul");
    a->age=19;
    a->weight=59.5;
}
int main (){
    person A;
    strcpy(A.name,"Rohan");
    A.age=16;
    A.weight=53.9;

    printf("%s\n",A.name);
    printf("%d\n",A.age);
    printf("%f\n",A.weight);

    change(&A);

    printf("%s\n",A.name);
    printf("%d\n",A.age);
    printf("%f\n",A.weight);

    return 0;
}