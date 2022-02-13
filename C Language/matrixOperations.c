// Program for Matrix Operations
#include <stdio.h>
#include <conio.h>

/// Start main
int main(){

    // Declare variables
    int row, column, tempVar;
    char choice, reRun;

    // Print Introduction line of Program
    printf("Matrix");

    // Ask user to enter row of matrix and store in row variable
    printf("\n\nHow many rows you want in matrix : ");
    scanf("%d", &row);
    
    // Ask user to enter columns of matrix and store in column variable
    printf("How many columns you want in matrix : ");
    scanf("%d", &column);
    int matrix1[row][column], matrix2[row][column], additionMatrix[row][column], subtractionMatrix[row][column], transposedMatrix[row][column];
    
    do{
        printf("\n\nPress + -> addition of matrix\nPress - -> subtraction of matrix\nPress T -> transpose Matrix\n");
        choice = getch();

            switch (choice)
            {
            case '+':
                
                // Let the user enter the elements of Matrix 1
                printf("\nEnter the elements of matrix 1:\n");
                // Loop for row
                for(int rowIndex = 0; rowIndex < row; rowIndex++){
                    // Loop for column
                    for(int columnIndex = 0; columnIndex < column; columnIndex++){
                        /* Tell user the enter the element of matrix
                        by telling him the position of element*/
                        printf("Element [%d, %d] : ", rowIndex, columnIndex);
                        scanf("%d", &matrix1[rowIndex][columnIndex]);
                        if(columnIndex == column - 1){
                            printf("\n");
                        }
                    }
                }

                // Let the user enter the elements of Matrix 2
                printf("\nEnter the elements of matrix 2:\n");
                // Loop for row
                for(int rowIndex = 0; rowIndex < row; rowIndex++){
                    // Loop for column
                    for(int columnIndex = 0; columnIndex < column; columnIndex++){
                        /* Tell user the enter the element of matrix
                        by telling him the position of element*/
                        printf("Element [%d, %d] : ", rowIndex, columnIndex);
                        scanf("%d", &matrix2[rowIndex][columnIndex]);
                        if(columnIndex == column - 1){
                            printf("\n");
                        }
                    }
                }

                // ADD MATRIX
                for(int rowIndex = 0; rowIndex < row; rowIndex++){
                    // Loop for column
                    for(int columnIndex = 0; columnIndex < column; columnIndex++){
                        // Addition
                        additionMatrix[rowIndex][columnIndex] = matrix1[rowIndex][columnIndex] + matrix2[rowIndex][columnIndex];
                        // printf("%d = %d + %d", additionMatrix[rowIndex][columnIndex], matrix1[rowIndex][columnIndex], matrix2[rowIndex][columnIndex]);
                    }
                }

                // Print the matrix
                printf("\n\nAddition of Matrix 1 & Matrix 2 :\n");
                // Loop for row
                for(int rowIndex = 0; rowIndex < row; rowIndex++){
                    // Loop for column
                    for(int columnIndex = 0; columnIndex < column; columnIndex++){
                        /* Tell user the enter the element of matrix
                        by telling him the position of element*/
                        printf("%d ", additionMatrix[rowIndex][columnIndex]);
                        if(columnIndex == column - 1){
                            printf("\n");
                        }
                    }
                }
                break;

            case '-':
                // Let the user enter the elements of Matrix 1
                printf("\nEnter the elements of matrix 1:\n");
                // Loop for row
                for(int rowIndex = 0; rowIndex < row; rowIndex++){
                    // Loop for column
                    for(int columnIndex = 0; columnIndex < column; columnIndex++){
                        /* Tell user the enter the element of matrix
                        by telling him the position of element*/
                        printf("Element [%d, %d] : ", rowIndex, columnIndex);
                        scanf("%d", &matrix1[rowIndex][columnIndex]);
                        if(columnIndex == column - 1){
                            printf("\n");
                        }
                    }
                }

                // Let the user enter the elements of Matrix 2
                printf("\nEnter the elements of matrix 2:\n");
                // Loop for row
                for(int rowIndex = 0; rowIndex < row; rowIndex++){
                    // Loop for column
                    for(int columnIndex = 0; columnIndex < column; columnIndex++){
                        /* Tell user the enter the element of matrix
                        by telling him the position of element*/
                        printf("Element [%d, %d] : ", rowIndex, columnIndex);
                        scanf("%d", &matrix2[rowIndex][columnIndex]);
                        if(columnIndex == column - 1){
                            printf("\n");
                        }
                    }
                }

                // ADD MATRIX
                for(int rowIndex = 0; rowIndex < row; rowIndex++){
                    // Loop for column
                    for(int columnIndex = 0; columnIndex < column; columnIndex++){
                        // Addition
                        subtractionMatrix[rowIndex][columnIndex] = matrix1[rowIndex][columnIndex] - matrix2[rowIndex][columnIndex];
                        // printf("%d = %d + %d", additionMatrix[rowIndex][columnIndex], matrix1[rowIndex][columnIndex], matrix2[rowIndex][columnIndex]);
                    }
                }

                // Print the matrix
                printf("\n\nSubtraction of Matrix 1 & Matrix 2 :\n");
                // Loop for row
                for(int rowIndex = 0; rowIndex < row; rowIndex++){
                    // Loop for column
                    for(int columnIndex = 0; columnIndex < column; columnIndex++){
                        /* Tell user the enter the element of matrix
                        by telling him the position of element*/
                        printf("%d ", subtractionMatrix[rowIndex][columnIndex]);
                        if(columnIndex == column - 1){
                            printf("\n");
                        }
                    }
                }
                break;

            case 't':
                // Let the user enter the elements of Matrix 1
                printf("\nEnter the elements of matrix:\n");
                // Loop for row
                for(int rowIndex = 0; rowIndex < row; rowIndex++){
                    // Loop for column
                    for(int columnIndex = 0; columnIndex < column; columnIndex++){
                        /* Tell user the enter the element of matrix
                        by telling him the position of element*/
                        printf("Element [%d, %d] : ", rowIndex, columnIndex);
                        scanf("%d", &matrix1[rowIndex][columnIndex]);
                        if(columnIndex == column - 1){
                            printf("\n");
                        }
                    }
                }

                // Transpose the matrix
                /* Transpose logic
                    Swap the dimensions of the arrays -> transpose variable and matrix variable
                    transposeMatrix[columnIndex][rowIndex] = matrix[rowIndex][columnIndex]
                */
                // Loop for row
                    for(int rowIndex = 0; rowIndex < row; rowIndex++){
                        // Loop for column
                        for(int columnIndex = 0; columnIndex < column; columnIndex++){
                            // Transpose matrix -> add the elements from column to row of transpose variable
                            transposedMatrix[columnIndex][rowIndex] = matrix1[rowIndex][columnIndex];
                        }
                    }
                    
                // Print the transposed matrix
                /*
                    Loops are meant to have row and column swapped,
                    so when user inputs diffrent row and column (means not same)
                    matrix printed should be proper
                    If same it doesn't matter
                */
                printf("\nTransposed matrix :\n");
                // Loop for row
                for(int rowIndex = 0; rowIndex < column; rowIndex++){
                    // Loop for column
                    for(int columnIndex = 0; columnIndex < row; columnIndex++){
                        /* Tell user the enter the element of matrix
                        by telling him the position of element*/
                        printf("%d ", transposedMatrix[rowIndex][columnIndex]);

                        /* For rows and columns if not equal row and columns
                        needed to be changed to print newline */
                        if(row != column){
                            if(columnIndex == row - 1){
                                printf("\n");
                            }
                        }else{
                            if(columnIndex == column - 1){
                                printf("\n");
                            }
                        }
                    }
                }
                break;
            
                default:
                    printf("Select valid option");
                    break;
            }

        printf("\n\nPress Y to run again !\n");
        reRun = getch();
    }while (reRun == 'y');

    // End program
    return 0;
}