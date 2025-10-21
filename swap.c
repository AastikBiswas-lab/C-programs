#include<stdio.h>
int main () {
    int a;
    int c;
    int b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("\nThe value of first number after swapping is %d",a);
    printf("\nThe value of second number after swapping is %d",b);
return 0;
}
