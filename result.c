#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    float average;
   
    printf("\nEnter marks in three subjects: ");
    scanf("%d %d %d",&marks1, &marks2, &marks3);
   
    average = (marks1 + marks2 + marks3) / 3.0f;
   
    if(average >= 60 || marks1 >= 80 || marks2 >= 80 || marks3 >= 80)
    {
        printf("\nGood result");
    }

    return 0;
}
