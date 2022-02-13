// Program to find a num is positive or negative and if the given  number is prime or not
#include <stdio.h>

void isPrime(int number){
    int isPrime = 0, i;
    for(i=2 ;i<= (number/2);i++){
        if((number % i) == 0){
            isPrime = 1;
            break;
        }
    }

    if (number == 0 || number == 1) {
    printf("Number (%d) is neither prime nor composite.\n", number);
    } else {
        // If isPrime is 0 then its prime
        if(!isPrime){
            printf("Number (%d) is a Prime number.\n", number);
        } else{
            printf("Number (%d) is not a Prime number.\n", number);
        }
    }
}

void isPositive(int number){
    if(number > 0){
        printf("Number (%d) is a Positive Integer\n", number);
    } else if(number < 0){
        printf("Number (%d) is a Negative Integer\n", number);
    }else{
        printf("Number (%d) is Neutral\n", number);
    }
}

void isEven(int number){
    if(number != 0){
        if((number % 2) == 0){
            printf("Number (%d) is Even Integer\n", number);
        }else{
            printf("Number (%d) is Odd Integer\n", number);
        }
    }
}

int main(){
    // Define variables
    int number[100], n;

    // Ask for how many integers
    printf("How many integers you want to use?\n");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        // Ask user to enter a number
        printf("Enter number (%d) : ", i+1);
        scanf("%d", &number[i]);
        printf("\n");
    }

    for(int i = 0; i<n; i++){
    // Run Function to check whether prime or not & positive or not
        isPositive(number[i]);
        isEven(number[i]);
        if(number[i] > 0){
            isPrime(number[i]);
        }
        printf("\n");
    }

    // End program
    return 0;
}