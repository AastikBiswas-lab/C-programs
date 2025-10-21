#include<stdio.h>
int main () {
    int num,i,r;
    int rev = 0;
    printf("\nEnter a number to check :");
    scanf("%d",&num);
    for (i=num;i>0;i=i/10) {
        r = i%10;
        rev = rev*10 + r;
    }
    if(rev == num) {
        printf("\nThe number is a palindrome number.");
    }
    else {
        printf("\nThe number is not a palindrome number.");
    }
    return 0;
}
