#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {1, 2, 3, 4, 5};     
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
    //n determine the number of times an array should be rotated    
    int n = 3;    
        
    //Displays original array    
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }     
        
    //Rotate the given array by n times toward right    
    for(int i = 0; i < n; i++){    
        int j,first;    
        //Stores the first element of the array    
        first= arr[0];    
        
        for(j =0;j<length;j++){    
            //Shift element of array by one    
            arr[j] = arr[j+1];    
        }    
        //first element of array will be added to the last of array.    
        arr[length-1] =first;  
		printf("\nAfter the %d step the array:",i+1);
		for(int k=0;k<length;k++)
		{
			printf("%d\t",arr[k]);
		  }  
		  printf("\n"); 
    }    
        
    printf("\n");    
        
    //Displays resulting array after rotation    
    printf("Array after right rotation: \n");    
    for(int i = 0; i< length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    
