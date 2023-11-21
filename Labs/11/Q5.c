#include <stdio.h>

// Define the Employee structure
struct Employee {
    int employee_id;
    char name[50];
    float salary;
};

// Define the Organization structure with the Employee structure nested inside
struct Organization {
    char organisation_name[50];
    int organisation_number;
    struct Employee emp;  // Nested structure variable
};

int main() {
    // Declare an instance of the Organization structure
    struct Organization org;

    // Get input from the user for organization details
    printf("Enter Organization Name: ");
    scanf("%s", org.organisation_name);

    printf("Enter Organization Number: ");
    scanf("%d", &org.organisation_number);

    // Get input from the user for employee details
    printf("Enter Employee ID: ");
    scanf("%d", &org.emp.employee_id);

    printf("Enter Employee Name: ");
    scanf("%s", org.emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &org.emp.salary);

    // Print the entered data
    printf("\nEntered Details:\n");
    printf("Employee ID: %d\n", org.emp.employee_id);
    printf("Employee Name: %s\n", org.emp.name);
    printf("Employee Salary: %.2f\n", org.emp.salary);
    printf("Organization Name: %s\n", org.organisation_name);
    printf("Organization Number: %d\n", org.organisation_number);

    return 0;
}
