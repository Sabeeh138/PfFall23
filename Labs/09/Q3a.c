#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    printf("Enter the size of the arrays: ");
    scanf("%d", &N);

    // Seed the random number generator
    srand(time(NULL));

    // Create and initialize arrays
    char charArray[N];
    int intArray[N];
    long long int longLongArray[N];

    for (int i = 0; i < N; i++) {
        charArray[i] = rand() % 256;  // Random char value between 0 and 255
        intArray[i] = rand();
        longLongArray[i] = ((long long int)rand() << 32) | rand();
    }

    // Print addresses and values using pointer arithmetic
    char *charPtr = charArray;
    int *intPtr = intArray;
    long long int *longLongPtr = longLongArray;

    printf("\nPrinting charArray:\n");
    for (int i = 0; i < N; i++) {
        printf("Address: %p, Value: %d\n", (void *)charPtr, *charPtr);
        charPtr++;
    }

    printf("\nPrinting intArray:\n");
    for (int i = 0; i < N; i++) {
        printf("Address: %p, Value: %d\n", (void *)intPtr, *intPtr);
        intPtr++;
    }

    printf("\nPrinting longLongArray:\n");
    for (int i = 0; i < N; i++) {
        printf("Address: %p, Value: %lld\n", (void *)longLongPtr, *longLongPtr);
        longLongPtr++;
    }

    return 0;
}
//took help from internet and muhammad abbas
