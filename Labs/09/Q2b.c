#include <stdio.h>

int prdct(int a, int b) {
    if (b == 0) {
        return 0;  // Base case: Anything multiplied by 0 is 0
    } else if (b > 0) {
        return a + prdct(a, b - 1);  // Recursively add 'a' 'b' times
    } else {
        // If 'b' is negative, change the sign and calculate the product
        return prdct(a, -b);
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int product = prdct(num1, num2);

    printf("Product of %d and %d is: %d\n", num1, num2, product);

    return 0;
}
