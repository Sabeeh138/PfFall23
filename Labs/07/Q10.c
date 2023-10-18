#include <stdio.h>

void findSubarray(int arr[], int N, int S) {
    int start = 0; // Start index of the subarray
    int end = 0;   // End index of the subarray
    int currentSum = 0; // Current sum of elements in the subarray

    for (end = 0; end < N; end++) {
        currentSum += arr[end];

        // If the current sum exceeds the target sum, remove elements from the start of the subarray
        while (currentSum > S) {
            currentSum -= arr[start];
            start++;
        }

        // If the current sum equals the target sum, we've found a subarray
        if (currentSum == S) {
            printf("The elements from index %d to %d add up to %d.\n", start, end, S);
            return;
        }
    }

    printf("No subarray found that adds up to %d.\n");
}

int main() {
    int S, N;

    printf("Enter the number S: ");
    scanf("%d", &S);

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    findSubarray(arr, N, S);

    return 0;
