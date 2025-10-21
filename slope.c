#include<stdio.h>
int main () {
    int x1,y1,x2,y2;
    float slope;
    printf("\nEnter the first coordinate : ");
    scanf("%d %d",&x1, &y1);
    printf("\nEnter the second coordinate : ");
    scanf("%d %d",&x2, &y2);
    slope = (y2-y1)/(x2-x1);
    printf("The slope is %.2f",slope);
    return 0;
}
