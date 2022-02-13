// Program for Printing Emplyee payment slip

#include <stdio.h>

// Delcaring Structure for Emplyee Pay Slip
struct empPaySlip{
    int empId;
    char empName[10];
    char designation[15];
    char department[15];
    float basicSalary;
};

void main(){
    struct empPaySlip slip;

    printf("\nEnter details :\n");
    printf("Employee Id : ");
    scanf("%d", &slip.empId);
    printf("Name : ");
    scanf("%s", &slip.empName);
    printf("Designation : ");
    scanf("%s", &slip.designation);
    printf("Department : ");
    scanf("%s", &slip.department);
    printf("Basic Salary : ");
    scanf("%f", &slip.basicSalary);

    printf("------------------------");
    printf("\n\n\tCompany Name\n");
    printf(" |  ID : %d\t\t|\n", slip.empId);
    printf(" | Name : %s\t\t|\n", slip.empName);
    printf(" | Designation : %s\t\t|\n", slip.designation);
    printf(" | Department : %s\t\t|\n", slip.department);
    printf(" | Salary for December Month  : Rs. %.2f\t\t|\n", slip.basicSalary);
    printf("------------------------");
    
}