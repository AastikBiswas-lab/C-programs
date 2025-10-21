#include<stdio.h>
int main () {
    int num;
    int i,j,r;
    int sum = 0;
    printf("\nEnter a number : ");
    scanf("%d",&num);
      for(i=0;i<num;i++) {
        for(j=num;j>0;j=j/10) {
       r = j%10;
        sum = sum + r;
        if(sum == 1) {
            break;
        } 
        else {
            num = sum;
            
        }
    }
        }
    
        if(sum ==1) {
            printf("\nThe number is a Happy number");
        }
        else {
            printf("\nThe number is not a happy number");
        }
    

        return 0;

    }


