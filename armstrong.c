#include<stdio.h>
#include<math.h>
int main () {
    int num,i;
    int sum=0;
    int c=0;
    int r;
    printf("\nEnter a number to check :");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10) {
       c++;
    }
    for(i=num;i>0;i=i/10) {
        r = i%10;
       sum = sum + pow(r,c);
    }
    if(sum == num) {
        printf("\nThe number is an armstrong number.");
    }
    else {
        printf("\nThe number is not an armstrong number.");
    }
    return 0;
}
