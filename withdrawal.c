#include<stdio.h>
int main () {
    int amount,balance;
    printf("Enter the withdrawal amount in multiples of 100 : ");
    scanf("%d",&amount);
    printf("Enter the Account balance :  ");
    scanf("%d",&balance);
  if(amount%100 == 0 && amount < balance && (balance - amount) >=500) {
    printf("Transaction Success");
  }
      else {
    printf("Transaction Failure");
      }
      return 0;
  }
