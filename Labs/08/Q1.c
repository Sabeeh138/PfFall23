/*
* Programmer : Muhammad Sabeeh
* Desc : swapping values using func
/*
#include <stdio.h>

	// Function to swap two integers
	void swapIntegers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

	int main() {
    int num1, num2;

    // Input the two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);
    // swapping them now, printing originals values first, then swapped ones
    	swapIntegers(&num1, &num2);
    printf("Swapped values: num1 = %d, num2 = %d\n", num2, num1);

    return 0;
}
