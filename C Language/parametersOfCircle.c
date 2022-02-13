// Program to get Circle paramters
#include <stdio.h>


// start main program
int main(){
    // Define vairables
    float pi = 3.14,radius = 0, circumference = 0, area = 0, diameter = 0;
    
    // Ask user to enter radius
    printf("Enter the radius of circle (in cm) : ");
    // Get radius from user
    scanf("%f", &radius);

    // Check wheter input is greater than 0
    if(radius < 1){
        // Show error message
        printf("Enter radius more than 0.");
    }else{
        // calculate diameter, area, circumference
        diameter = radius * 2;
        area = pi * radius * radius;
        circumference = 2 * pi * radius;

        // Show all parameters of circle
        printf("\nAll paramters of circle are :\n");
        printf("Radius : %.2f cm\nDiameter : %.2f cm\nArea : %.2f sq.cm\nCircumference : %.2f cm", radius, diameter, area, circumference);
    }
    // End the program
    return 0;
}



/* Algorithm */
/*
    Start
    Define vairable ->
        radius => Radius input from user
        pi => set the value of pi
        diameter => result of pi * radius * 2
        area => to store area of circle
        circumference => to store circumference of cirle
    Ask user to input radius
    get radius
    calculate diamter = radius * 2
    show Circumference, area, diameter, raidus
    End
*/
