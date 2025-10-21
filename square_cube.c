#include<stdio.h>
int main () {
    int num;
    int square=0;
    int cube=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    square = num * num;
    cube = square * num;
    printf("\nThe square of the number is %d",square);
    printf("\nThe cube of the number is %d",cube);
    return 0;
}
