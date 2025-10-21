#include<stdio.h>
int main ( ) {
    int num;
    int i;
    int sum = 0;
    int r = 0;
    printf("Enter the number :");
    scanf("%d",&num);
    for(i=num;i>0;i=1/10) {
        r = i%10;
     sum = sum + r;
    }
    if(num%sum == 0) {
        printf("The number is a niven number.");
    }
    else {
        printf("The number is not a niven number.");
    }
    return 0;
}
