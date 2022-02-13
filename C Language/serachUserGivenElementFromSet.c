// Program to find user defined element from set of elements (array)

//Include Header file (dependency)
#include <stdio.h>
#include <conio.h>

// Main Program
int main(){

    // Define & initialize vairables
    int array[100], i, n, isFound = 0,searchElement, locationFound;
    char choice;
    
    // Print How many elements want to add in set
    printf("How many elements want to add in Array Set ?\n");
    // Get the n from user
    scanf("%d", &n);

    printf("Enter %d elements :\n", n);
    // // Get n times the elements to add in array
    for(i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    
    do
    {
        isFound = 0;
        // // Print enter element to serach
        printf("\nEnter an element to serach from Array : ");
        // // Get serach element from user input
        scanf("%d", &searchElement);


        // // Serach element from the arraySet
        for(i=0;i<n;i++){
            if(searchElement == array[i]){
                isFound = 1;
                locationFound = i;
            }
        }

        if(isFound){
            printf("Element %d was found on location [%d]", searchElement, locationFound);
        }else{
            printf("Element %d was not found", searchElement);
        }

        // Ask user if want to quit or re run program
        printf("\n\nPress Y to search again or Press any key to quit !");
        choice = getch();

        printf("\n\n");

    } while (choice == 'y');

    // Return nothing to prevent compiler warnign's
    return 0;
}



/* Algorithm */

/*
    Start
    Initialize and define variables
    Vairables ->
            int arraySet[100] -> for storing all elements of set (100 maxlimit)
            int i -> for loops
            int n -> for number of elements to store in arraySet[]
            int searchElement -> for element to serach in array

    Ask user to enter how many elements (n) want to store in arrayElement
    get n times the input from user to store in array
    ask user to enter element to serach from arraySet[]
    get the searchElement and find in array using loop, running it till n
    show the success message if found or else show not found error message to user
    show user three option y/n/s
        y -> run program again
        n -> quit
        s -> show all elements
        
        if selected y 
            re run program from serach part
        if selected n
            quit program
        if selected s
            show all array elements

    
    clearScreen if he chooses to serach again
    End

*/