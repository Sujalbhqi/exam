#include <stdio.h>    
     
int main()    
{        
    int arr[] = {1, 2, 3, 4, 5};     
        

    int length = sizeof(arr)/sizeof(arr[0]);    
    int i;
    printf("Original array: \n");    
    for ( i = 0; i < length; i++) 
	{     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    
    for (i = length-1; i >= 0; i--) 
	{     
        printf("%d ", arr[i]);     
    }         
}    
