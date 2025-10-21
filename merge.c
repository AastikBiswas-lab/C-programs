#include<stdio.h>
int main () {
    int n,m;
    int i;
    printf("\nEnter the size of the first array :");
   scanf("%d",&n);
   int arr[n];
   printf("\nEnter the size of the second array :");
   scanf("%d",&m);
   int arr2[m];
   printf("\nEnter the elements of the first array : ");
   for(i=0;i<n;i++) {
    scanf("%d",&arr[i]);
   }
   printf("\nEnter the elements of the second array : ");
   for(i=0;i<m;i++) {
    scanf("%d",&arr2[i]);
   }
   int merge_arr[n+m];
   for(i=0;i<n;i++) {
    merge_arr[i] = arr[i];
   }
   for(i=0;i<m;i++) {
    
    merge_arr[n+i] = arr2[i];
    
   }
   printf("\nThe elements of the merged array are :");
      for(i=0;i<(n+m);i++) {
        printf("\n%d",merge_arr[i]);
      }
      return 0;
}
