#include<stdio.h>
int main () {
    int n1,n2,n3,n4,n5;
    float average = 0.0;
    printf("\nEnter 5 numbers :");
    scanf("%d %d %d %d %d",&n1, &n2, &n3, &n4, &n5);
     average = (n1 + n2 + n3 + n4 + n5)/5;
     printf("\nThe average is %.2f",average);
}
