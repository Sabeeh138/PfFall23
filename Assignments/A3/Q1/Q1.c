#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER_SIZE 100

// Function to dynamically allocate memory for the matrix
int **allocateMatrix(int size) {
    int **matrix = (int **)malloc(sizeof(int *) * size);
    int *block = (int *)malloc(sizeof(int) * size * size);

    for (int i = 0; i < size; i++)
        matrix[i] = block + i * size;

    return matrix;
}

// Function to read a matrix from a file
void readMatrixFromFile(FILE *file, int **matrix, int size) {
    char buffer[MAX_BUFFER_SIZE];

    for (int i = 0; !feof(file) && i < size; i++) {
        fgets(buffer, MAX_BUFFER_SIZE, file);
        buffer[strcspn(buffer, "\n")] = 0; // Remove newline character

        // Read space-separated values in the file
        char *num = strtok(buffer, " ");
        for (int j = 0; num != NULL && j < size; j++) {
            matrix[i][j] = atoi(num);
            num = strtok(NULL, " ");
        }
    }
}

// Function to print a matrix
void printMatrix(int **matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%-3d ", matrix[i][j]);
        }
        printf("\n\n");
    }
}

// Function to find the maximum value in a square matrix
int findMaxValue(int **matrix, int row, int col, int size) {
    int maxValue = 1 << 31; // Set initial max value to the minimum possible integer

    // Check positions in the entire square matrix
    for (int k = 0, check[] = {0, 0, 1, 0, 1, 1, 0, 1}; k < 8;) {
        int currentValue = matrix[row + check[k++]][col + check[k++]];
        maxValue = (currentValue > maxValue) ? currentValue : maxValue;
    }

    return maxValue;
}

// Function to create and return a submatrix with maximum values
int **getSubMatrixWithMaxValues(int **matrix, int size) {
    int subMatrixSize = size / 2;
    int **subMatrix = allocateMatrix(subMatrixSize);

    for (int i = 0; i < size; i += 2) {
        for (int j = 0; j < size; j += 2) {
            // Assign max value to the submatrix
            subMatrix[i / 2][j / 2] = findMaxValue(matrix, i, j, size);
        }
    }

    return subMatrix;
}

int main(int argc, char const *argv[]) {
    printf("Prog: Muhammad Sabeeh\nID: 23K-0002\n\n");
    int dimension = atoi(argv[1]);

    while (!(dimension == 2 || dimension == 4 || dimension == 8)) {
        printf("Incorrect dimension\nEnter dimension again: ");
        scanf("%d", &dimension);
    }

    FILE *file = fopen(argv[2], "r");

    int **matrix = allocateMatrix(dimension);
    readMatrixFromFile(file, matrix, dimension);
    printMatrix(matrix, dimension);

    int **subMatrix = getSubMatrixWithMaxValues(matrix, dimension);
    printf("\nSubmatrix with maximum values:\n");
    printMatrix(subMatrix, dimension / 2);

    // Free allocated memory
    free(*matrix);
    free(matrix);
    free(*subMatrix);
    free(subMatrix);

    return 0;
}
