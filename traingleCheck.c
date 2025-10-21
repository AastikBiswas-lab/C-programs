#include<stdio.h>
int main () {
    int a1,a2,a3;
    int sum = 0;
    printf("Enter the 3 angles of the triangle : ");
    scanf("%d %d %d",&a1, &a2, &a3);
    sum = a1 + a2 + a3;
    if(sum == 180) {
        printf("\nThe triangle is valid.");
        if(a1 == a2 == a3) {
         printf("\nThe triangle is equilateral.");
        }
        else if(a1 != a2 != a3) {
            printf("\nThe triangle is scalene.");
        }
        else {
            printf("\nThe triangle is isosceles.");
        }
    }
    else {
        printf("\nThe triangle is not valid.");
    }
    return 0;
}
