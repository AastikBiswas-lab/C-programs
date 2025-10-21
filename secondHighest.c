#include<stdio.h>
int main () {
    int n;
    int i;
     printf("Enter the array range : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements : ");
        for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int maxelement = arr[0];
    for(i=0;i<n;i++) {
        if(arr[i] > maxelement) {
             maxelement = arr[i];
        }
    }
    printf("\nThe  maximum element in the array is %d",maxelement);
    int arr2[n];
    int c =0;
    for(i=0;i<n;i++) {
        if(arr[i] != maxelement) {
              arr2[c] = arr[i];
        }
              c++;
    }
    int S_maxelement = arr2[0];
    for(i=0;i<n;i++) {
        if(arr2[i] > S_maxelement) {
             S_maxelement = arr2[i];
        }
    }
    printf("\nThe Second maximum element in the array is %d",S_maxelement);
    return 0;
}
