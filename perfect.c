#include<stdio.h>
int main () {
    int num;
    int i;
    int sum = 0;
    printf("\nEnter a number to check :");
    scanf("%d",&num);
    for(i=1;i<num;i++) {
        if(num%i == 0) {

        
        sum = sum + i;
        }
    }
    if(sum == num) {
        printf("\nthe number is a perfect number");
    }
    else {
        printf("\nthe number is not a perfect number");
    }
    return 0;
}
