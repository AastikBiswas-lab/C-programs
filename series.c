#include<stdio.h>
int main () {
    int i;
    int endPoint;
    printf("\nEnter the end point for the series : ");
    scanf("%d",&endPoint);
    for (i=1;i<=endPoint;i = i*2) {
      
       
        printf("%d,",i);    
    }
    return 0;
}
