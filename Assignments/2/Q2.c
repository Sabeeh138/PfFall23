/*
* Programmer : Muhammad Sabeeh
* Desc : this program asks fro a inpout of a 2-d binary matrix and finds the biggest square submatrix of 1s
/*
 #include <stdio.h>

// Function to find the minimum of three numbers
int findMinimum(int a, int b, int c) {
    int minimum;
    if (a < b) {
        minimum = a;
    } else {
        minimum = b;
    }

    if (minimum < c) {
        return minimum;
    } else {
        return c;
    }
}

// Function to calculate the largest square matrix of ones in a binary matrix
void calculateLargestSquareSubmatrix(int matrix[100][100], int rows, int cols) {
    int maxSize = 0;
    int maxI = 0;
    int maxJ = 0;
    int i, j;

    int dp[100][100];  // Create a 2D array to store the size of the largest square ending at (i, j)

    // Nested loop to traverse through the whole array
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = matrix[i][j];
            } else if (matrix[i][j] == 1) {
                dp[i][j] = 1 + findMinimum(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]);
            } else {
                dp[i][j] = 0;
            }

            if (dp[i][j] > maxSize) {
                maxSize = dp[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }

    if (maxSize == 0) {
        printf("No square submatrix of 1s found.\n");
    } else {
        printf("The largest square submatrix of 1s has dimensions %dx%d:\n", maxSize, maxSize);
        for (i = maxI; i > maxI - maxSize; i--) {
            for (j = maxJ; j > maxJ - maxSize; j--) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }
}

int main() {
    int matrix[100][100];
    int rows, cols, i, j;

    printf("Enter the number of rows:");
    scanf("%d", &rows);
    printf("\nEnter the number of columns:");
    scanf("%d", &cols);

    printf("Enter the binary matrix elements (0s and 1s):\n");
    for (i = 0; i < rows; i++) {
        printf("Enter values for row %d\n", i + 1);
        for (j = 0; j < cols; j++) {
            printf("Enter values for column %d:", j + 1);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    calculateLargestSquareSubmatrix(matrix, rows, cols);

    return 0;
}
