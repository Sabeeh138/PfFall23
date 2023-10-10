



#include <stdio.h>

int main() {
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    if (row != col) {
        printf("The matrix is not symmetric.\n");
        return 1;  
    }

    int matrix[row][col];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

   
    int isSymmetric = 1;  

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; 
                break;
            }
        }
        if (!isSymmetric) {
            break;  
        }
    }

    if (isSymmetric) {
        printf("Array is Symmetric:\n");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Array is not symmetric:\n");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

