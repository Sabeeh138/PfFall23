/*
 * Creator: Muhammad Sabeeh
 * Date: 19/11/23
 * Description: Creating a universal array print function that
 *              makes use of pointer arithmetics and variable casting
 */

#include <stdio.h>

void printArray(void* arr, size_t size, char dataType) {
    // Determine the size of each element based on the data type
    size_t elementSize;
    switch (dataType) {
        case 'i': // integer
            elementSize = sizeof(int);
            break;
        case 'f': // float
            elementSize = sizeof(float);
            break;
        case 'd': // double
            elementSize = sizeof(double);
            break;
        // Add more cases for other data types as needed
        default:
            printf("Unsupported data type\n");
            return;
    }

    // Print the values in the array
    printf("Array values: ");
    for (size_t i = 0; i < size; ++i) {
        // Calculate the offset for each element
        size_t offset = i * elementSize;

        // Use appropriate casting based on the data type
        if (dataType == 'i') {
            printf("%d ", *((int*)((char*)arr + offset)));
        } else if (dataType == 'f') {
            printf("%f ", *((float*)((char*)arr + offset)));
        } else if (dataType == 'd') {
            printf("%lf ", *((double*)((char*)arr + offset)));
        }
        // Add more cases for other data types as needed
    }

    printf("\n");
}

int main() {
    // Example usage:
    int intArray[] = {1, 2, 3, 4, 5};
    printArray(intArray, sizeof(intArray) / sizeof(int), 'i');

    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printArray(floatArray, sizeof(floatArray) / sizeof(float), 'f');

    double doubleArray[] = {1.11, 2.22, 3.33, 4.44, 5.55};
    printArray(doubleArray, sizeof(doubleArray) / sizeof(double), 'd');

    return 0;
}
