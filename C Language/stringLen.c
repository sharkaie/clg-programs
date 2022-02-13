// Program to find the string length wihout strlength
#include <stdio.h>


// Print String Function
void printString(char string[]){
    for (int i = 0; i !='\0'; i++) {
        printf("%s", string[i]);
    }
}

// Start
int main() {

    char string[100], reverse[100];
    int i = 0, vowels = 0;
    char sentence[] = "C language is the mother of all languages.";

    // Get input from user
    printf("Enter your String : ");
    scanf("%s", string);

    // Count the string legth
    for(i = 0; i < 20; i++){
        // Check for vowels
        if( string[i] == 'a' ||
                string[i] == 'e' ||
                string[i] == 'i' ||
                string[i] == 'o' ||
                string[i] == 'u'){
                vowels++;
        }
    }
    
    // Reverse
    int k = 0;
    for(int j = i - 1; j >=0; j--){
        reverse[k] = string[j];
        k++;
    }

    // Print Information of string
    printf("String Length : %d\n", i);
    printf("Vowels : %d\n", vowels);
    printf("Reverse String: %s\n", reverse);

    return 0;
}