#include<stdio.h>
int main () {
    float interest;
    int time;
    int amount;
    float rate;
    printf("Enter the principal amount :");
    scanf("%d",&amount);
    printf("Enter the time :");
    scanf("%d",&time);
    printf("Enter the rate of interest :");
    scanf("%f",&rate);
    interest = (amount * time * rate)/100;
    printf("\nThe interest is : %f",interest);
    return 0;
}
