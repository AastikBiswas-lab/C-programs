#include<stdio.h>
int main () {
    unsigned int num;
    int fact;
    int i;
    printf("\nEnter a number :");
    scanf("%d", &num);
    for(i=1;i<=num;i++) {
        fact = fact * i;
    }
    printf("\nThe factorial is %d",fact);
    return 0 ;
}
