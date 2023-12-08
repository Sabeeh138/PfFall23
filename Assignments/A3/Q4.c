/*
programmer:Muhammad Sabeeh
ID:7/12/2023
Descr: a program that calculates highest salary paid to workers in each department annd the detail of those worker
             and the totol salaries paid by each department
date:7/12/23
*/
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

// Function to find workers with the highest salary in each department
void findMaxSalaryEmployees(struct Employee employees[], int size) {
    char uniqueDepartments[10][20];  // Array to store unique department names
    int maxSalaries[10] = {0};       // Array to store maximum salary for each department

    // Initialize arrays with empty strings
    for (int i = 0; i < 10; i++) {
        strcpy(uniqueDepartments[i], "");
    }

    // Find maximum salary for each department
    for (int i = 0; i < size; i++) {
        if (employees[i].salary > maxSalaries[i]) {
            maxSalaries[i] = employees[i].salary;
            strcpy(uniqueDepartments[i], employees[i].department);
        }
    }

    // Display details of workers with maximum salary for each department
    printf("Details of Employees with Highest Salary in Each Department:\n");
    for (int i = 0; i < 10; i++) {
        if (strcmp(uniqueDepartments[i], "") != 0) {
            printf("Department: %s\n", uniqueDepartments[i]);
            printf("Employee ID: %d\n", employees[i].employeeId);
            printf("Name: %s %s\n", employees[i].firstName, employees[i].lastName);
            printf("Salary: %d\n", maxSalaries[i]);
            printf("Joining Date: %s\n", employees[i].joiningDate);
            printf("-------------\n");
        }
    }
}

// Function to calculate total salaries paid by each department
void calculateTotalSalariesByDepartment(struct Employee employees[], int size) {
    char uniqueDepartments[10][20]; // Array to store unique department names
    int totalSalaries[10] = {0};    // Array to store total salary for each department

    for (int i = 0; i < 10; i++) {
        strcpy(uniqueDepartments[i], "");
    }

    // Calculate total salary for each department
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 10; j++) {
            if (strcmp(employees[i].department, uniqueDepartments[j]) == 0) {
                totalSalaries[j] += employees[i].salary;
                break;
            } else if (strcmp(uniqueDepartments[j], "") == 0) {
                strcpy(uniqueDepartments[j], employees[i].department);
                totalSalaries[j] += employees[i].salary;
                break;
            }
        }
    }

    // Display departments along with total salaries
    printf("\nDepartments and Total Salaries:\n");
    for (int i = 0; i < 10; i++) {
        if (strcmp(uniqueDepartments[i], "") != 0) {
            printf("%s - %d\n", uniqueDepartments[i], totalSalaries[i]);
        }
    }
}

int main() {
    printf("Muhammad Sabeeh\n23k-0002\n\n\n");

    // Initializing an array of structures for employee data
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

    // Calculate the number of elements in the employees array
    int size = sizeof(employees) / sizeof(employees[0]);

    findMaxSalaryEmployees(employees, size);
    calculateTotalSalariesByDepartment(employees, size);

    return 0;
}
