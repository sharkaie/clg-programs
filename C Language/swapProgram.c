// Program to swap vairalbes
#include <stdio.h>

// Function to print 2 vairables
// void printVars(int var1, int var2){
//     printf("Var1 : %d\nVar2 : %d\n", var1, var2);
// }

// Function to print 3 vairables
// void printVars(int var1, int var2, int var3){
//     printf("Var1 : %d\nVar2 : %d\nVar3 : %d\n", var1, var2, var3);
// }

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
    /* Program for swapping 2 varaibles */
    /*
    int var1=0, var2=0, tempVar=0;
    printf("Enter Variables : ");
    scanf("%d %d", &var1, &var2);

    // Print varaibles
    printVars(var1, var2);
    // Swap Varaibles
    tempVar = var1;
    var1 = var2;
    var2 = tempVar;

    printf("\nAfter Swapping \n");
    printVars(var1, var2);
    */




    /* Program for swapping 3 variables */
    /*
    int var1=0, var2=0, var3=0, tempVar=0;
    int n;
    
    printf("How many variables to swap : ");

    // Ask for the n vairables to swap
    scanf("%d", &n);

    printf("Enter Variables : \n");
    scanf("%d %d %d", &var1, &var2, &var3);

    // Print varaibles
    printVars(var1, var2, var3);
    // Swap Varaibles
    tempVar = var1;
    var1 = var2;
    var2 = var3;
    var3 = tempVar;

    printf("\nAfter Swapping \n");
    printVars(var1, var2, var3);
    */


    /* Program for swapping n variables */
    // Define Variables array size is the maxlimit of the swapping n input
    int array[10], n, j, tempVar;

    // Get how manny varaibles to swap
    printf("How many variables to swap : ");
    // Get n
    scanf("%d %d\n", &n, &j);

    // Check if n doesn't exceed 10
    if(n>10){
        printf("Only max 10 limits are allowed");
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



// Algorithm for 2 vairable swapping
/*
    Start
    define 3 variables a, b, temp
    store value of a to temp
    change a = b
    set b = temp
    out swapped vaiables
*/



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
    if array (i)  == n set the array to tempVar
        array[i] = tempVar
    else{
        store array[i] = array[i+1]
    }

    Show all Varaibles
        
    End
*/