// Program to swap two variables
#include <stdio.h>

// Function to print 2 vairables
// void printVars(int var1, int var2){
//     printf("Var1 : %d\nVar2 : %d\n", var1, var2);
// }


int main (){
    int var1=0, var2=0, tempVar=0;
    printf("Enter Variables : ");
    scanf("%d", &var1, &var2);

    // Print varaibles
    printVars(var1, var2);
    // Swap Varaibles
    tempVar = var1;
    var1 = var2;
    var2 = tempVar;

    printf("\nAfter Swapping \n");
    // print Swap variables
    printVars(var1, var2);
}