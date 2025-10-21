#include<stdio.h>
int main () {
    int i;
    int num;
    int sum = 0;
    printf("Enter a number to check:");
    scanf("%d",&num);
    for(i = 1;i<num;i++) {
         if(num%i == 0) {
            sum = sum + i;
         }

    }
    if(sum > num) {
        printf("\nThe number is an abundant number.");
    }
    else {
        printf("\nThe number is not an abundant number.");
    }
}
