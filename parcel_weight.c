#include<stdio.h>
int main () {
    int weight;
    char type;
    int amount = 0;
    printf("\nEnter the weight of the parcel in kilograms :");
    scanf("%d",&weight);
     printf("\nEnter the type of courier :");
     scanf(" %c",&type);
     if(type == 'I') {
        amount = 1500;
     }
     else {
        amount = 0;
     }
     if(weight <= 5) {
        amount = amount + 800*weight;
     }
     else if(weight <= 10) {
        amount = amount + 5*800 + (weight-5)*700;
     }
     else {
        amount = amount + 5*800 + 5*700 + (weight - 10)*500;
     }
     printf("\nThe total amount needed to be paid is %d",amount);
     return 0;
}
