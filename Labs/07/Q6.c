/*
* Programmer : Muhammad Sabeeh
* Desc : frequency of each element present in the array
/*
#include <stdio.h>


int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[n];
    for (int i = 0; i < n; i++) {
        freq[i] = -1; 
    }

    for (int i = 0; i < n; i++) {
        int count = 1; 

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }

        if (freq[i] != 0) {
            freq[i] = count; 
        }
    }

    printf("Element\tFrequency\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
