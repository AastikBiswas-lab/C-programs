#include<stdio.h>
int main () {
    int n;
    int i;
    int j;
    int Count;
    printf("Enter the array range : ");
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    printf("Enter the array elements : ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        
    }
       for (i = 0; i < n; i++)
	{
		Count = 1;
		for(j = i + 1; j < n; j++)
		{
    		if(arr[i] == arr[j])    
    		{
    			Count++;
    			freq[j] = 0;    
    		}
    	}
    	if(freq[i] != 0)        
    	{
    		freq[i] = Count;
		}
	}
    	
 	for (i = 0; i < n; i++)
  	{
  		if(freq[i] != 0)        
  		{
  			printf("%d Occurs %d Time(s) \n", arr[i], freq[i]);
		}		
  	}	     
 	return 0;
}
