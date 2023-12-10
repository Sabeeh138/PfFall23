/*
Programmer:Muhammad Sabeeh
ID:23k-0002
Desc:A program to create a database of employee records with performance
            based ratings calculted randomly and calculating the best performing department
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent an employee
struct Employee {
    char name[20];
    char role[20];
    int communication;
    int teamwork;
    int creativity;
};

// Structure to represent a department
struct Department {
    char name[20];
    struct Employee employees[5]; // An array of structures
    int totalCommunication;
    int totalTeamwork;
    int totalCreativity;
};

// Function to generate a random name from a hardcoded pool of names in the main function
char* getRandomName(char pool[][20], int poolSize) {
    return pool[rand() % poolSize];
}

// Function to initialize a department with employees and their attributes
void initializeDepartment(struct Department *dept, char deptName[], char rolePool[][20], int rolePoolSize) {
    strcpy(dept->name, deptName);
    dept->totalCommunication = 0;
    dept->totalTeamwork = 0;
    dept->totalCreativity = 0;

    int i;
    for (i = 0; i < 5; i++) {
        do {
            strcpy(dept->employees[i].name, getRandomName(rolePool, rolePoolSize));
        } while (strstr(dept->employees[i].name, "Assigned"));

        int roleIndex;
        do {
            roleIndex = rand() % rolePoolSize;
        } while (strstr((const char *)dept->employees, rolePool[roleIndex]));

        strcpy(dept->employees[i].role, rolePool[i]);
        dept->employees[i].communication = rand() % 100 + 1;
        dept->employees[i].teamwork = rand() % 100 + 1;
        dept->employees[i].creativity = rand() % 100 + 1;

        dept->totalCommunication += dept->employees[i].communication;
        dept->totalTeamwork += dept->employees[i].teamwork;
        dept->totalCreativity += dept->employees[i].creativity;
    }
}

// Function to print the details of a department
void printDepartmentDetails(struct Department *dept) {
    printf("| %-10s | %-10s | %-12s | %-13s | %-8s | %-10s |\n",
           "Department", "Role", "Name", "Communication", "Teamwork", "Creativity");
    printf("|------------|------------|--------------|---------------|----------|------------|\n");

    int i;
    for (i = 0; i < 5; i++) {
        printf("| %-10s | %-10s | %-12s | %-13d | %-8d | %-10d |\n",
               dept->name,
               dept->employees[i].role,
               dept->employees[i].name,
               dept->employees[i].communication,
               dept->employees[i].teamwork,
               dept->employees[i].creativity);
    }

    printf("|------------|------------|--------------|---------------|----------|------------|\n");
}

int main() {
    printf("Muhammad Sabeeh\n23K-0002\n\n");

    // Pool of names for random assignment
    char namePool[][20] = {"Alice", "Bob", "Charlie", "David", "Eva", "Frank", "Grace", "Hank", "Ivy", "Jack",
                           "Katie", "Liam", "Mia", "Noah", "Olivia", "Peter", "Quinn", "Rachel", "Sam", "Tom"};

    // Pool of roles
    char rolePool[][20] = {"Director", "Executive", "Manager", "Employee", "Trainee"};
    int rolePoolSize = sizeof(rolePool) / sizeof(rolePool[0]);

    // Initialize departments with unique names
    struct Department departments[4];
    char deptNames[][20] = {"HR", "Finance", "Marketing", "Logistics"};

    int i;
    for (i = 0; i < 4; i++) {
        initializeDepartment(&departments[i], deptNames[i], rolePool, rolePoolSize);
    }

    // Print department details
    for (i = 0; i < 4; i++) {
        printf("Details for %s Department:\n", departments[i].name);
        printDepartmentDetails(&departments[i]);
        printf("\n");
    }

    // Determine the Best Department
    int bestDeptIndex = 0;
    int maxTotalValues = departments[0].totalCommunication + departments[0].totalTeamwork + departments[0].totalCreativity;

    for (i = 1; i < 4; i++) {
        int currentTotalValues = departments[i].totalCommunication + departments[i].totalTeamwork + departments[i].totalCreativity;

        if (currentTotalValues > maxTotalValues) {
            maxTotalValues = currentTotalValues;
            bestDeptIndex = i;
        }
    }

    // Print the Best Department and its details
    printf("Best Department Award goes to: %s Department\n", departments[bestDeptIndex].name);
    printf("Total Communication: %d\n", departments[bestDeptIndex].totalCommunication);
    printf("Total Teamwork: %d\n", departments[bestDeptIndex].totalTeamwork);
    printf("Total Creativity: %d\n", departments[bestDeptIndex].totalCreativity);

    // Print the sum of values for each department separately
    printf("\nSum of values for each department separately:\n");
    for (i = 0; i < 4; i++) {
        printf("%s Department - Communication: %d, Teamwork: %d, Creativity: %d\n",
               departments[i].name,
               departments[i].totalCommunication,
               departments[i].totalTeamwork,
               departments[i].totalCreativity); 
    }

    return 0;
}
