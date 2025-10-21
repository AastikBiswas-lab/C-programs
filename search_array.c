#include<stdio.h>
int main () {
    int n;
    int i;
    int low=0;
    int high = 9;
    int arr[10];
    int mid,search;
    printf("Enter array elements in sorted order : ");
    for(i=0;i<10;i++) {
      scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched :");
    scanf("%d",&search);
mid = (int)(low+high)/2;
while (low <= high) {
if (arr[mid] < search)
low = mid + 1;
else if (arr[mid] == search) {
printf("The element is present ");
break;
}
else {
high = mid - 1;
mid = (low + high)/2;
}
}
if (low > high)
printf("\nElement not present ");

return 0;
}
