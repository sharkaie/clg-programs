// Program for basic calulator (+ , -, *, /) for two integers
#include <stdio.h>
int main() {    

    float num1, num2, result = 0;
    char operator;
    
    // Get Integers and operator from user
    printf("Enter equation : ");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch (operator)
    {
        case '+':
            // Sum of the two Numbers
            result = num1 + num2;
            // Output the sum to console
            printf("Result [Sum] : %.2f",result);
            break;
        
        case '-':
            // Diffrence of the two Numbers
            result = num1 - num2;
            // Output the diffrence to console
            printf("Result [Diffrence] : %.2f",result);
            break;
        case '*':
            // Multiplication of the two Numbers
            result = 1;
            result = num1 * num2;
            // Output the multiplication to console
            printf("Result [Mulitplication] : %.2f",result);
            break;
        case '/':
            // Division of the two Numbers
            result = 1;
            result = num1 / num2;

            // Check if user has input the 0 show infinity result without crashing
            if(num2==0){
                // Output the division to console
                printf("Result [Division] : Infinity");
            }else{
                // Output message infinity to  console
                printf("Result [Division] : %.2f",result);
            }
            break;
    
        default:
            // user has input undefined operator
            printf("Operator not found");
            break;
    }
   
    return 0;
}
