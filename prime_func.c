#include<stdio.h>
void prime (int num) {
    int c= 0;
    int i;
    for(i=1;i<=num;i++) {
    if(num%i == 0) {
        c = c +1;
    }
    if(c==2) {
        printf("\n%d",num);
    }
    }
}
    int main () {
      
      int start;
      int end;
     int j;
      printf("\nEnter your beginning number of the range : ");
      scanf("%d",&start);
     printf("\nEnter your ending number of the range : ");
      scanf("%d",&end);
       j = start;
       while(j<=end) {
        prime(j);
         j++;
       }
       return 0;
    }
