#include<stdio.h>
#include <stdlib.h>
int main () {
    int num;
    int square=0;
    int i=10;
    int left_part=0;
    int right_part = 0;
   int  sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
   square = num*num;
  while(i<square) {
       right_part = square%i;
       left_part = square/i;
       i = i*10;
       sum = right_part + left_part;
    if(sum == num) {
        printf("\nThe number is a kaprekar number.");
        exit(0);
        }
 }
     printf("\nThe number is a not kaprekar number.");  
        return 0;
  }
