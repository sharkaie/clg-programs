#include <stdio.h>
 
void main()
{    
    //Initialize array
    int array[10];
    int arraySize, i;
    int temp = 0;
        
    printf("Enter the size of array :\n");
    scanf("%d", &arraySize);

    printf("Enter the array elements one by one by pressing enter:\n");
    for(i=0;i<arraySize;i++){
        
        scanf("%d", &array[i]);
    }

    //Calculate length of array arr
    // int length = sizeof(array)/sizeof(array[0]);
        
    //Displaying elements of original array
    printf("Elements of original array:\n");
    for (i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }      
        
    // Sort the array in ascending order
    for (int i = 0; i < arraySize; i++) {
        for (int j = i+1; j < arraySize; j++) {
           if(array[i] > array[j]) {
               temp = array[i];
               array[i] = array[j];
               array[j] = temp;
           } 
        }
    }

    printf("\n");
        
    //Displaying elements of array after sorting
    printf("Elements of array sorted in ascending order: \n");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }
}