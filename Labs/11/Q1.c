#include <stdio.h>

// Define the structure for student data
struct Student {
    int roll_number;
    char name[50];
    char department[50];
    char course[50];
    int year_of_joining;
};

// Function to print names of all students 
void printStudentsyear(struct Student students[], int numStudents, int year) {
    printf("Students who joined in %d:\n", year);
    int i;
	for (i = 0; i < numStudents; i++) {
        if (students[i].year_of_joining == year) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print the data of a student whose roll number is given
void printStudentRoll(struct Student students[], int numStudents, int rollNumber) {
    int i;
	for (i = 0; i < numStudents; i++) {
        if (students[i].roll_number == rollNumber) {
            printf("Student Data for Roll Number %d:\n", rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].year_of_joining);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", rollNumber);
}

int main() {
    // Assuming there are not more than 450 students in the college
    const int MAX_STUDENTS = 450;

    // Create an array to store student objects
    struct Student students[MAX_STUDENTS];

    // Prompt user to enter details for each student
    int numStudents;
    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);
int i;
    for ( i = 0; i < numStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Name: ");
        scanf("%49s", students[i].name);
        printf("Department: ");
        scanf("%49s", students[i].department);
        printf("Course: ");
        scanf("%49s", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].year_of_joining);
    }

    // Prompt user to perform operations
    int choice;
    printf("\nChoose operation:\n1. Print names of students by year\n2. Print data of a student by roll number\n");
    scanf("%d", &choice);

    if (choice == 1) {
        // Print names of students who joined in a particular year
        int year;
        printf("Enter the year: ");
        scanf("%d", &year);
        printStudentsyear(students, numStudents, year);
    } else if (choice == 2) {
        // Print data of a student by roll number
        int rollNumber;
        printf("Enter the roll number: ");
        scanf("%d", &rollNumber);
        printStudentRoll(students, numStudents, rollNumber);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
