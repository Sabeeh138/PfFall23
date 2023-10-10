/*
* Programmer : Muhammad Sabeeh
* Desc : shifting arrays
/*
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void rotateLeft(int arr[], int N, int d) {
    d = d % N;

    if (d < 0) {
        d = N + d;
    }

    int cycles = gcd(N, d);

    for (int i = 0; i < cycles; i++) {
        int temp = arr[i];
        int j = i;

        while (1) {
            int k = (j + d) % N;

            if (k == i) {
                break;
            }

            arr[j] = arr[k];
            j = k;
        }

        arr[j] = temp;
    }
}

int main() {
    int N, d;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &d);

    rotateLeft(arr, N, d);

    printf("Rotated Array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

