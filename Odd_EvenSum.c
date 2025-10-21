#include<stdio.h>
int main () {
    int n;
    int i;
    printf("\nEnter the value of n : ");
    scanf("%d",&n);
    int sum_odd = 0;
    int sum_even = 0;
    for(i=1;i<=n;i++) {
        if(i%2 == 0) {
            sum_even = sum_even + i;
        }
        else {
            sum_odd = sum_odd + i;
        }
    }
    printf("\nThe sum of odd numbers is : %d",sum_odd);
    printf("\nThe sum of even numbers is : %d",sum_even);
    return 0;
}
