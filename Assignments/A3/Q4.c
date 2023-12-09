/*
programmer:Muhammad Sabeeh
ID:7/12/2023
Descr: a program that calculates highest salary paid to workers in each department annd the detail of those worker
             and the totol salaries paid by each department
*/
#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

// Structure to hold worker data
struct Employee {
    int employeeId;
    char firstName[20];
    char lastName[20];
    int salary;
    char joiningDate[20];
    char department[20];
};

// Function to display workers with the maximum salary for each department
void displayMaxSalaryEmployees(struct Employee employees[], int size) {
    char departments[10][20];
    int maxSalaries[10] = {0};
    int maxSalaryIndexes[10] = {-1};  

    // Initialize arrays with empty strings
    for (int i = 0; i < 10; i++) {
        strcpy(departments[i], "");
    }

    // Find maximum salary and index for each department
    for (int i = 0; i < size; i++) {
        int departmentIndex = -1;

        // Find or create department entry
        for (int j = 0; j < 10; j++) {
            if (strcmp(employees[i].department, departments[j]) == 0) {
                departmentIndex = j;
                break;
            } else if (strcmp(departments[j], "") == 0) {
                strcpy(departments[j], employees[i].department);
                departmentIndex = j;
                break;
            }
        }

        if (departmentIndex != -1) {
            // Update max salary and index if the current salary is higher
            if (employees[i].salary > maxSalaries[departmentIndex]) {
                maxSalaries[departmentIndex] = employees[i].salary;
                maxSalaryIndexes[departmentIndex] = i;
            }
        }
    }

    // Display details of employees with maximum salary for each department
    printf("Details of Employees with Maximum Salary for Each Department:\n");
    for (int i = 0; i < 10; i++) {
        if (strcmp(departments[i], "") != 0) {
            // Print details only if there is an employee with the max salary in the department
            if (maxSalaryIndexes[i] != -1) {
                printf("Department: %s\n", departments[i]);
                printf("Employee ID: %d\n", employees[maxSalaryIndexes[i]].employeeId);
                printf("Name: %s %s\n", employees[maxSalaryIndexes[i]].firstName, employees[maxSalaryIndexes[i]].lastName);
                printf("Salary: %d\n", maxSalaries[i]);
                printf("Joining Date: %s\n", employees[maxSalaryIndexes[i]].joiningDate);
                printf("-------------\n");
            }
        }
    }
}

// Function to calculate and display total salaries paid by each department
void fetchTotalSalariesByDepartment(struct Employee employees[], int size) {
    char departments[10][20];
    int totalSalaries[10] = {0};
    int i, j;

    // Initialize arrays with empty strings
    for (i = 0; i < 10; i++) {
        strcpy(departments[i], "");
    }

    // Calculate total salary for each department
    for (i = 0; i < size; i++) {
        for (j = 0; j < 10; j++) {
            if (strcmp(employees[i].department, departments[j]) == 0) {
                totalSalaries[j] += employees[i].salary;
                break;
            } else if (strcmp(departments[j], "") == 0) {
                strcpy(departments[j], employees[i].department);
                totalSalaries[j] += employees[i].salary;
                break;
            }
        }
    }

    // Display departments along with total salaries
    printf("\nDepartments and Total Salaries:\n");
    for (i = 0; i < 10; i++) {
        if (strcmp(departments[i], "") != 0) {
            printf("%s - %d\n", departments[i], totalSalaries[i]);
        }
    }
}

int main() {
    printf("Muhammad Sabeeh\n23k-0002\n\n");

    struct Employee employees[] = {
        {1, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
        {2, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
        {3, "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
        {4, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
        {5, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
        {6, "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
        {7, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
        {8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
    };

    int size = sizeof(employees) / sizeof(employees[0]);

    displayMaxSalaryEmployees(employees, size);

    fetchTotalSalariesByDepartment(employees, size);

    return 0;
}
