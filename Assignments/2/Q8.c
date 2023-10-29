#include <stdio.h>

int calculatePersistence(int num) {
    int persistence = 0;

    while (num >= 10) {
        int product = 1;

        while (num > 0) {
            product *= num % 10;
            num /= 10;
        }

        num = product;
        persistence++;
    }

    return persistence;
}

int main() {
    int num;

    while (1) {
        printf("Enter a positive integer (EOF to exit): ");
        int result = scanf("%d", &num);

        if (result == EOF) {
            break;
        }

        if (num <= 0) {
            printf("Please enter a positive integer.\n");
            continue;
        }

        int persistence = calculatePersistence(num);
        printf("The persistence of %d is %d.\n", num, persistence);
    }

    return 0;
}

