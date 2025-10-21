#include<stdio.h>
int main () {
    int digit;
    int i,sum=0,product=1;
    int r;
    printf("Enter a  digit : ");
    scanf("%d",&digit);
    printf("\nThe digit are :");
    for(i=digit;i>0;i=i/10) {
        r = i%10;
        printf("\n%d",r);
        sum = sum + r;
        product = product*r;
    }
    printf("\nThe sum of the digits is %d",sum);
    printf("\nThe product of the digits is %d",product);
    return 0;
}
