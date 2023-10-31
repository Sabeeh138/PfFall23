#include <stdio.h>

// Function to find the factorial of an integer using recursion
	int fact(int n) {
    if (n == 0) {
        return 1; // Base case: 0! = 1
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * fact(n - 1);
    }
}

int main() {
    int n;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long int result = fact(n);
        printf("%d! = %llu\n", n, result);
    }

    return 0;
