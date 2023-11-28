#include <stdio.h>
#include <string.h>


struct Register {
    int CourseId;
    char CourseName[50];
};


struct Student {
    int StudentId;
    char FirstName[50];
    char LastName[50];
    char cellno[15];
    char email[50];
    struct Register reg;
};
int main() {
    struct Student std[5];
int i = 0;
    for (i = 0; i < 5; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("StudentId: ");
        scanf("%d", &std[i].StudentId);

        printf("FirstName: ");
        scanf("%s", std[i].FirstName);

        printf("LastName: ");
        scanf("%s", std[i].LastName);

        printf("Cell Number: ");
        scanf("%s", std[i].cellno);

        printf("Email: ");
        scanf("%s", std[i].email);

        printf("CourseId: ");
        scanf("%d", &std[i].reg.CourseId);

        printf("CourseName: ");
        scanf("%s", std[i].reg.CourseName);

        printf("\n");
    }

    printf("Details of 5 students:\n");
    for (i = 0; i < 5; ++i) {
        printf("Student %d:\n", i + 1);
        printf("StudentId: %d\n", std[i].StudentId);
        printf("FirstName: %s\n", std[i].FirstName);
        printf("LastName: %s\n", std[i].LastName);
        printf("Cell Number: %s\n", std[i].cellno);
        printf("Email: %s\n", std[i].email);
        printf("CourseId: %d\n", std[i].reg.CourseId);
        printf("CourseName: %s\n\n", std[i].reg.CourseName);
    }

    return 0;
}
