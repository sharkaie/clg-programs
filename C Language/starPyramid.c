// Program to print star pyramid
#include <stdio.h>

void printStar(int n){
    for (int i = 0; i < n; i++){
        printf("* ");
    }
}

int main(){
    // Initialize variable
    int n;
    // Ask user to to start pyramid from
    printf("From where to start the star pyramid : ");
    scanf("%d", &n);

    if(n == 0 || n <0) {
        printf("Enter n more than 0");
        return 0;
    }
    
    for (int i = n; i > 0; i--)
    {
        printStar(i);
        printf("\n");
    }
    return 0;
}