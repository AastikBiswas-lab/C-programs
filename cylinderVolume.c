#include<stdio.h>
int main () {
    float radius,height;
    printf("\nEnter the radius of the cylinder :");
    scanf("%f",&radius);
    printf("\nEnter the height of the cylinder :");
    scanf("%f",&height);
  float volume = 0.0;
   volume = 3.14 * radius * radius * height;
   printf("\nThe volume is : %d",volume);
   return 0;
}
