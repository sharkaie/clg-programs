#include <stdio.h>

int main(){

    int num1, num2, num3, sum, diff, mul;

    printf("Enter 3 Integers to Add Multiply or division :\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    diff = num1 - num2 - num3;
    mul = num1 * num2 * num3;

    printf("\n*** Results ***\nAddition : %d\nDiffrence : %d\nMultiplication : %d", sum, diff, mul);

    return 0;
}