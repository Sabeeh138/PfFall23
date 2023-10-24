/*
* Programmer : Muhammad Sabeeh
* Desc : calc for basic arithemtic func
/*
#include <stdio.h>

// Function to perform basic arithmetic operations
float calculate(float num1, float num2, char operator) {
    switch (operator) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed\n");
                return 0.0;
            }
        default:
            printf("Error: Invalid operator\n");
            return 0.0;
    }
}

int main() {
    float num1, num2, result;
    char operator;

    // Input the two numbers and the operation choice
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the operation (+ for addition, - for subtraction, * for multiplication, / for division): ");
    scanf(" %c", &operator);

    // Call the calculate function to perform the operation
    result = calculate(num1, num2, operator);

    // Display the result
    printf("Result: %f %c %f = %f\n", num1, operator, num2, result);

    return 0;
}
