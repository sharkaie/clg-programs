// Program to generate fibonacci numbers till n
#include <stdio.h>

// Start main
int main(){
    // Variable declaration
    int fibonacci[100], n;
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    // Ask User how many numbers till fibonacci series
    printf("How many numbers of fibonacci series to print : ");
    // Get n from user
    scanf("%d", &n);

    // Check if n < 0
    if(n <= 0) {
        printf("Enter n greater than 0");
    }


    // Run loop till n
    for(int i = 0;i<n;i++){
        // Logic fb3 = fb1 + fb2
        if(i <= 1){
            printf("%d ", fibonacci[i]);
        }else{
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
            printf("%d ", fibonacci[i]);
        }

    }
    return 0;
}

// /* Algorithm */

// /*
//     Start
//     Declare two variables
//         fibonacci[100] => storing fibonacci values
//         n => for storing count value
//         Intialize fibonacci[0] = 0, fibonacci[1] = 1;
//     Ask user to enter till what length he want to print fibonacci numbers
//     get n from user
//     run loop till i<n
//         if n is less than or qual to 1
//             print fibonnachi[i] as it is
//         else
//             logic
//             fibonacci[i] = fibonacci[i-1] + fibonacci[i-2]
//             print fibonacci[i]
//     End
// */