#include <stdio.h>
#include <math.h>

int ram(int num) {
    int count = 0;
    int n = (int) cbrt(num); // Find the cubic root of the number

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (i * i * i + j * j * j == num) {
                count++;
            }
            if (count == 2) {
                return 1; // Its a Ramanujan number
            }
        }
    }
    return 0;
}

int main() {
    int n;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Ramanujan numbers less than %d^3:\n", n);

    for (int i = 1; i <= n * n * n; i++) {
        if (ram(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
