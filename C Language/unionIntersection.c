/* Program to print Union, Intersection of two sets */
#include <stdio.h>
#include <conio.h>

void printSet(int array[], int n){
    printf("{");
        for(int i = 0; i < n; i++){
            if(i == (n-1)){
                printf(" %d", array[i]);
            }else{
                printf(" %d,", array[i]);
            }
        }
    printf(" }");
}


// swap Function using pointer to just swap the addresses
void swap(int* xpointer, int* ypointer)
{
    int temp = *xpointer;
    *xpointer = *ypointer;
    *ypointer = temp;
}

// Sort Function
void sortArray(int array[], int n){
    int minIndex;

    // 
    /*
        Just detect duplciate elments index number in an array
        then just eliminate that indexes while printing union set
    */
    for(int i = 0; i < n-1; i++){
        // Set minIndex for array to crrent i
        minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(array[j] < array[minIndex]){
                minIndex = j;
            }
            // Swap the numbers using pointer swap function to the first index as minIndex
            swap(&array[minIndex], &array[i]);
        }
    }
}

// Find Union function
void unionSets(int array1[], int array2[], int n1, int n2){
    
    int unionArray[n1 + n2], duplicateIndex[n2], k=0, l=0, isDuplicate = 0;
    int data[2];
    // Find Duplicates
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(array1[i] == array2[j]){
                // Store duplicate index of array1
                duplicateIndex[k] = i;
                k++;
            }
        }
    }
    
    /*
        add both array items into a array to union
        filter the duplicate arrays
    */

    for(int i = 0; i < n1; i++){
        isDuplicate = 0;
        for(int j = 0; j < k; j++){
            if( duplicateIndex[j] == i){
                isDuplicate = 1;
            }
        }
        if(isDuplicate == 0){
            unionArray[l] = array1[i];
            l++;
        }
    }

    for(int i = 0; i < n2; i++){
        unionArray[l] = array2[i];
        l++;
    }
    sortArray(unionArray, l);
    printSet(unionArray, l);
}

// Find Intersection function
void intersectSets(int array1[], int array2[], int n1, int n2){
    
    int intersectionArray[n1 + n2], duplicateIndex[n2], k=0, l=0, isDuplicate = 0;
    int data[2];
    // Find Duplicates
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(array1[i] == array2[j]){
                // Store duplicate index of array1
                duplicateIndex[k] = i;
                k++;
            }
        }
    }
    
    /*
        add only duplicate indexed items of array1
    */

    for(int i = 0; i < n1; i++){
        isDuplicate = 0;
        for(int j = 0; j < k; j++){
            if( duplicateIndex[j] == i){
                isDuplicate = 1;
            }
        }
        if(isDuplicate == 1){
            intersectionArray[l] = array1[i];
            l++;
        }
    }
    sortArray(intersectionArray, l);
    printSet(intersectionArray, l);
}

void getSetValues(int array[], int n){
    printf("\nEnter the (%d) elements\n", n);
    for(int i = 0; i < n; i++){
        printf("Element %d : ", i+1);
        scanf("%d", &array[i]);
    }
}

// Start Main Program
int main(){
    // Declare choice Variable
    char choice;

    // ReRun program from this do block
    do{
        // Declare the varialbes
        int n1, n2;

        // Ask user how many elements he want to add in Set 1
        printf("How many elements you want to add in 1st Set?\n");
        scanf("%d", &n1);

        // Declare array
        int set1[50]; 

        // Get elements of set 1
        getSetValues(set1, n1);

        // Ask user how many elements he want to add in Set 2
        printf("\nHow many elements you want to add in 2nd Set?\n");
        scanf("%d", &n2);

        // Declare Set 2
        int set2[50];

        // Get Elements of Set 2
        getSetValues(set2, n2);

        // Print before sorting
        printf("\nSet 1 : ");
        printSet(set1, n1);
        printf("\n");
        printf("Set 2 : ");
        printSet(set2, n2);


        /* Union of both sets logic 
        all unique elements in single set, with avoiding repeating elements only 1 time */
        printf("\n\nUnion of both Sets\n");
        unionSets(set1, set2, n1, n2);

        /* Intersection of both sets logic 
        all duplicate elements in single set */
        printf("\n\nIntersection of both Sets\n");
        intersectSets(set1, set2, n1, n2);


        // Sort the array to find union
        // sortArray(set1, n1); // Sort set1
        // sortArray(set2, n2); // Sort set2
        // Print after sorting
        // printf("\n\nAfter sorting");
        // printf("\nSet 1 : ");
        // printSet(set1, n1);
        // printf("\nSet 2 : ");
        // printSet(set2, n2);

        printf("\n\nPress Y to run again\nPress any key to exit...\n");
        choice = getch();
    }while(choice == 'y');
    
    // End Program
    return 0;
}
// Coomment for 200