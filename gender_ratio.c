#include<stdio.h>
int main () {
    int male_no;
    int female_no;
    float ratio=0.0;
    printf("Enter the number of males : ");
    scanf("%d",&male_no);
    printf("Enter the number of females : ");
    scanf("%d",&female_no);
      ratio = male_no/female_no;
      printf("The ratio of males to females is %f",ratio);
      return 0;
}
