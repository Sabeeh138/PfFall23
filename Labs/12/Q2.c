/*
 * Creator: Muhammad Sabeeh
 * Description: check if files are equal
 */
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int compareFiles(const char *file1, const char *file2);

int main() {
    const char *file1 = "file1.docx";
    const char *file2 = "file2.docx";

    // Compare the contents of the files
    if (compareFiles(file1, file2)) {
        printf("Files are equal.\n");
    } else {
        printf("Files are not equal.\n");
    }

    return 0;
}

int compareFiles(const char *file1, const char *file2) {
    FILE *f1 = fopen(file1, "rb");
    FILE *f2 = fopen(file2, "rb");

    if (f1 == NULL || f2 == NULL) {
        perror("Error opening files for comparison");
        exit(EXIT_FAILURE);
    }

    unsigned char buffer1[BUFFER_SIZE];
    unsigned char buffer2[BUFFER_SIZE];
    size_t bytesRead1, bytesRead2;

    do {
        bytesRead1 = fread(buffer1, 1, sizeof(buffer1), f1);
        bytesRead2 = fread(buffer2, 1, sizeof(buffer2), f2);

        if (bytesRead1 != bytesRead2 ||
            memcmp(buffer1, buffer2, bytesRead1) != 0) {
            fclose(f1);
            fclose(f2);
            return 0; // Files are not equal
        }
    } while (bytesRead1 > 0);

    fclose(f1);
    fclose(f2);

    return 1; // Files are equal
}

