#include<stdio.h>
#include<math.h>
int main () {
    int num,i1;
    double i;
    printf("Enter a number to check :");
    scanf("%d",&num);
    int n = num + 1;
    i = sqrt(n);
    i1 = (int)sqrt(n);
    if((i-i1) == 0) {
        printf("The number is a sunny number.");
    }
    else {
        printf("The number is not a sunny number.");
    }
}
