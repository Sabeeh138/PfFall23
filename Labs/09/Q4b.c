#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
   
	if (n <= 0)
        return 0;  // Base case: Fibonacci(0) is 0
    else if (n == 1)
        return 1;  // Base case: Fibonacci(1) is 1
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

// Function to print the first n Fibonacci numbers
void printFibonacci(int n) {
     int i;
	if (n <= 0)
        return;
    
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main() {
    int n;

    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);  
	printf("The first %d Fibonacci numbers are: ", n);
    printFibonacci(n);
	printf("\n");
    

    return 0;
}
