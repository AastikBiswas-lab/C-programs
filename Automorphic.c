#include<stdio.h> 
#include <math.h>
int main () {
    int num,i;
    int sqrt;
    int count=0;
    int d;
    int r;
    printf("\nEnter a number :");
    scanf("%d",&num);
sqrt = num * num;
  for(i=num;i>0;i=i/10) {
      count++;
  }
     d = pow(10,count);
     r = sqrt%d;
     if(num == r) {
        printf("\nThe number is an automorphic number");
     }
     else {
        printf("\nThe number is not an automorphic number");
     }
     return 0;
}
