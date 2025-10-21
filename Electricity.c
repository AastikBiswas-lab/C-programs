#include<stdio.h>
int main () {
    int units;
    float bill=0;
    printf("Enter the units consumed :");
    scanf("%d",&units);
     if(units <= 100) {
        bill = bill + units*2;
     }
     else if(units <= 300){
        bill = bill + 100*2 + (units-100)*3;
     }
     else {
        bill = bill + 100*2 + 200*3 + (units-300)*3;
        bill = (0.025*bill) + bill;
     }
     printf("The total bill need to be paid is %f",bill);
     return 0;
}
