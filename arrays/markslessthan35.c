#include <stdio.h>
int main()
{
    int marks[10]; 
    for (int i = 0; i <= 9; i++)
    {
        int a = i+1;
        printf("\nEnter marks of student %d : ",a);
        scanf("%d",&marks[i]);
    }
    printf("The roll number (index number) of students who scored less than 35 are : ");
    for(int i=0;i<=9;i++){
        if (marks[i] < 35)
        {
            printf("%d ",i);
        }
    }
    return 0;
}