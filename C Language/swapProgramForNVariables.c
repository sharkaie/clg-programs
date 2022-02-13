// Program to swap n vairalbes
#include <stdio.h>

int printArray(int array[], int n){
    printf("Variables [ ");
    for(int i=0;i<n;i++){
        if(i == (n-1)){
            printf("%d", array[i]);
        }else{
            printf("%d, ", array[i]);
        }
    }
    printf(" ]\n");
}

// Main Function
int main(){
    // Define Variables array size is the maxlimit of the swapping n input
    int array[10], n, tempVar;

    // Get how manny varaibles to swap
    printf("How many variables to swap : ");
    // Get n from user input
    scanf("%d", &n);
    printf("\nEnter %d Variables: \n", n);

    // Check if n  exceed 10 otherwise end the program with error
    if(n>10){
        printf("Only max 10 variables are allowed");
        return 0;
    }

    // Run loop till n to get vaiables
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }

    // Print all variables
    printArray(array, n);

    // Swapping logic
    tempVar = array[0];
    for(int i=0;i<n;i++){
        if(i == (n-1)){
            array[i] = tempVar;
        }else{
            array[i] = array[i+1];
        }
    }

    // Print all variables
    printArray(array, n);

    return 0;
}

// ALgroithm for n swapping
/*
    Start
    define vaiable array[10](max limit 10), temperary variable, n for number of varialbes to swap,i for loop
    Ask user for numbers of variables to swap (scanf n)
    Check if the n doesn't exceed maxlimit (10) of array

    run for loop till n
        get the inputs from user

    Show all Varaibles

    store tempVar = array[0]
    Run loop again till for n variables
    if array (i)  == (n-1) set the array to tempVar
        array[i] = tempVar
    else{
        store array[i] = array[i+1]
    }

    Show all Varaibles
        
    End
*/