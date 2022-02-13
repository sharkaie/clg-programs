#include <stdio.h>

const float pi = 3.14;

void calculateParameters(float radius, int circleNumber){
    float circumference = 0, area = 0, diameter = 0;

    // Check wheter input is greater than 0
    if(radius < 1){
        // Show error message
        printf("\nFor circle (%d) enter radius more than 0 units.\n", circleNumber);
    }else{
        // calculate diameter, area, circumference
        diameter = radius * 2;
        area = pi * radius * radius;
        circumference = 2 * pi * radius;

        // Show all parameters of circle
        printf("\nAll paramters of circle (%d) are :\n", circleNumber);
        printf("Radius : %.2f units\nDiameter : %.2f units\nArea : %.2f sq.units\nCircumference : %.2f units\n", radius, diameter, area, circumference);
    }
}

int main(){
    // Define vairables
    float radius[100];
    int n;
    
    // ask how many circles user want to calculate parameters
    printf("How many circles parameter you want to calculates ?\n");
    scanf("%d", &n);

    // get all radius
    for(int i=0; i<n; i++){
        printf("\nEnter the raidus of circle (%d) : ", i+1);
        scanf("%f", &radius[i]);
    }
    
    // Calculate for all circles
    for(int i=0; i<n; i++){
        calculateParameters(radius[i], i+1);
    }

    // End the program
    return 0;
}