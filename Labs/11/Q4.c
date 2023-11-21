#include <stdio.h>

// Define the structure for employee data
struct Employee {
    char name[50];
    float salary;
    int hours_worked;
};

// Function to increase salary based on hours worked
void increaseSalary(struct Employee *employee) {
    if (employee->hours_worked >= 12) {
        employee->salary += 150;
    } else if (employee->hours_worked >= 10) {
        employee->salary += 100;
    } else if (employee->hours_worked >= 8) {
        employee->salary += 50;
    }
}

int main() {
    const int NUM_EMPLOYEES = 10;

    // Create an array of Employee structures
    struct Employee employees[NUM_EMPLOYEES];

    // Prompt user to enter details for each employee
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hours_worked);

        // Increase salary based on hours worked
        increaseSalary(&employees[i]);
    }

    // Print the names of all employees along with their final salaries
    printf("\nFinal Salaries:\n");
    int i;
