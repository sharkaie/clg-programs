// Program to reverse a number
#include <stdio.h>

// Start main program
int main(){
    // Define & intialize variable
    int n, number[100], reverseNum = 0, remainder;

    // Ask for how many integers
    printf("How many integers you want to use?\n");
    scanf("%d", &n);
    printf("\n");

    if(n == 0 || n<0 || n >100){
        printf("Enter n within 0 - 100");
        return 0;
    }

    for(int i = 0; i<n; i++){
        reverseNum = 0;
        // Ask user to enter a number
        printf("Enter number (%d) : ", i+1);
        scanf("%d", &number[i]);
        

        // Run loop till number is 0
        while (number[i] != 0) {
        // for (int j = number[i];number[i] != 0;) {
            remainder = number[i] % 10;
            reverseNum = reverseNum * 10 + remainder;
            number[i] /= 10;
        }

        // Show Reversed Number
        printf("Reversed number : %d \n\n", reverseNum);
    }

 

    // return nothing
    return 0;
}