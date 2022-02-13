#include <stdio.h>

int main()
{
    // float a, b, c;
    float c;
    int a, b;
    printf("\nEnter the dividend and the divisor :");
    scanf("%d %d" ,&a ,&b);
    c = a / b;
    printf("the value is %f" ,c);
    
    return 0;
}