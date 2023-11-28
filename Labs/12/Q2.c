#include <stdio.h>
#include <stdlib.h>

void createWordFile(const char *filename, const char *text) {
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        perror("Error creating file");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "%s", text);

    fclose(file);
}

int compareFiles(const char *file1, const char *file2) {
    FILE *f1 = fopen(file1, "rb");
    FILE *f2 = fopen(file2, "rb");

    if (f1 == NULL || f2 == NULL) {
        perror("Error opening files for comparison");
        exit(EXIT_FAILURE);
    }

    int ch1, ch2;
    while ((ch1 = fgetc(f1)) != EOF && (ch2 = fgetc(f2)) != EOF) {
        if (ch1 != ch2) {
            fclose(f1);
            fclose(f2);
            return 0; // Files are not equal
        }
    }

    fclose(f1);
    fclose(f2);

    // If one file is longer than the other, they are not equal
    if (ch1 != ch2) {
        return 0;
    }

    return 1; // Files are equal
}

int main() {
    const char *file1 = "file1.docx";
    const char *file2 = "file2.docx";
    const char *text = "This is a test.";

    // Create two Word files
    createWordFile(file1, text);
    createWordFile(file2, text);

    // Compare the contents of the files
    if (compareFiles(file1, file2)) {
        printf("Files are equal.\n");
    } else {
        printf("Files are not equal.\n");
    }

    return 0;
}
