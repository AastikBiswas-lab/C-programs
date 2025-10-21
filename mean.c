#include<stdio.h>
#include<math.h>
int main () {
    int n;
    printf("Enter the array size :");
    scanf("%d",&n);
    int arr[n];
    int i;
    int sum = 0,sum2 =0;
    float avg = 0.0;
    float var=0.0;
    float sd = 0.0;
    printf("Enter the array elements :");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
      avg = sum/n;
      for(i=0;i<n;i++) {
        
       sum2  = sum2 + pow((arr[i] - avg),2);
    }
     var = sum2/n;
     sd = sqrt(var);
     printf("\nThe mean is %f",avg);
      printf("\nThe variance is %f",var);
      printf("\nThe SD is %f",sd);
}
