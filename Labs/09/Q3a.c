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
    char Arrayx[N];
    int  Arrayy[N];
    long long int Arrayz[N];

    for (int i = 0; i < N; i++) {
        Arrayx[i] = rand() % 256;  // Random char value between 0 and 255
        Arrayy[i] = rand();
        Arrayz[i] = ((long long int)rand() << 32) | rand();
    }

    // Print addresses and values using pointer arithmetic
    char *charPtr = Arrayx;
    int *intPtr = Arrayy;
    long long int *longLongPtr = Arrayz;

    printf("\nPrinting Arrayx:\n");
    for (int i = 0; i < N; i++) {
        printf("Address: %p, Value: %d\n", (void *)charPtr, *charPtr);
        charPtr++;
    }

    printf("\nPrinting Arrayy:\n");
    for (int i = 0; i < N; i++) {
        printf("Address: %p, Value: %d\n", (void *)intPtr, *intPtr);
        intPtr++;
    }

    printf("\nPrinting Arrayz:\n");
    for (int i = 0; i < N; i++) {
        printf("Address: %p, Value: %lld\n", (void *)longLongPtr, *longLongPtr);
        longLongPtr++;
    }

    return 0;
}
//took help from internet and muhammad abbas
