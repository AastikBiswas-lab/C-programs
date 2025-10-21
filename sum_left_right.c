#include<stdio.h>
int main () {
    int num,LeftmostDigit,RightmostDigit;
    printf("\nEnter a four digit number : ");
    scanf("%d",&num);
    RightmostDigit = num%10;
    LeftmostDigit = num/1000;
    printf("\nProduct of leftmost and rightmost digits is %d",LeftmostDigit*RightmostDigit);
    printf("\nSum of leftmost and rightmost digits is %d",LeftmostDigit+RightmostDigit);
    return 0;
}
