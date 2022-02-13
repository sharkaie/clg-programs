// Program to find factorial of n numbers
#include <stdio.h>
int main(){
    // Variable Initialization
    int factorial = 1, n;

    // Print Enter the Number on console
    printf("Enter the (n) number for factorial : ");
    // Get N from input
    scanf("%d", &n);

    // Calculate the factorial of N numbers using for loop
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i; // Factorial logic
    }

    // Print Factorial
    printf("Factorial of [%d] is : %d", n, factorial);
    return 0;
}