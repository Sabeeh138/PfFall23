#include <stdio.h>

void reverse(int *arr, int s) {
    int *start = arr;
    int *end = arr + s - 1;
    int temp;

    while (start < end) {
        // Swap the elements at 'start' and 'end'
        temp = *start;
        *start = *end;
        *end = temp;

int main() {
    int arr[10];
    int i;

    printf("Enter 10 integers:\n");

    // Input values from the user
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Call the reverse function
    reverse(arr, 10);
    printf("\nreversed array\n:");
    for (i = 0; i < 10; i++) {
        printf(" %d : %d\n ",i+1, arr[i]);
    }

    return 0;
}
