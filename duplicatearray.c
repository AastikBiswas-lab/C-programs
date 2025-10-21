#include<stdio.h>
int main () {
    int n;
    int i;
    int j;
    int k;
    printf("Enter the array size :");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++) {
       scanf("%d",&arr[i]);
    }
        for(i=0;i<n;i++) {
            for(j=i+1;j<n+1;j++) {
                if(arr[i] == arr[j]) {
                 for(k = j; k < n; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				n--;
				j--;
			
                }
            }
        }
        printf("\nThe array after removing Duplicates is : ");
        for(i=0;i<n;i++) {
            printf("\n%d",arr[i]);
        }
        return 0;
}
