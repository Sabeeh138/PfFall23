#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the dividend: ");
    scanf("%d", &x);
    printf("Enter the divisor: ");
    scanf("%d", &y);

    if (y == 0) {
        printf("Division by zero is not allowed.\n");
        return 1; 
    }

    int quotient = 0;

    while (x >= y) {
        x = x - y;
        quotient++;
    }

    printf("Quotient: %d\n", quotient);
    
    return 0;
}
