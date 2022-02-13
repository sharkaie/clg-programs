// Program to reverse a integer
#include<stdio.h>
int main()
{
    // Define the variable
    int n, reverse=0, remainder;
    printf("Enter a number to reverse: ");
    scanf("%d", &n);

    // Run loop till n is 0
    while(n!=0)
    {   
        // Reversing integer Logic
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
    printf("Reversed Integer is : %d",reverse);
    return 0;
}