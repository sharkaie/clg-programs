// Factorial till n
#include <stdio.h>

int factorial(int n){
    int factorial;
    return factorial *= n;
}

int main(){
    // Declare vairable
    int n;
    int factorial = 1;

    // Ask user till where he want to print factorial
    printf("Till what count you want to print Factorials : ");
    // Get n
    scanf("%d", &n);

    if(n<0){
        printf("Enter n more than 0");
    }

    // Run loop till n
    for(int i=1;i<n;i++){
        // Logic factorial = factorial * i
        factorial *= i;
        printf("Factorial of %d : %d\n", i, factorial);
    }

    // End
    return 0;
}