#include <stdio.h>

// Function to perform sorting based on age and price
void ascshirt(int ages[], float prices[], int n) {
    // Bubble sort to sort based on age in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ages[j] > ages[j + 1]) {
                // Swap ages
                int tempAge = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = tempAge;

                // Swap prices
                float tempPrice = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = tempPrice;
            }
        }
    }

    // Bubble sort to sort based on price in descending order (within the same age)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ages[j] == ages[j + 1] && prices[j] < prices[j + 1]) {
                // Swap prices
                float tempPrice = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = tempPrice;
            }
        }
    }
}

int main() {
    int n; // Number of shirts
    printf("Enter the number of shirts: ");
    scanf("%d", &n);

    int ages[n];
    float prices[n];

    // Input shirt details
    for (int i = 0; i < n; i++) {
        printf("Enter age for shirt %d: ", i + 1);
        scanf("%d", &ages[i]);
        printf("Enter price for shirt %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    // Sort shirt details
    ascshirt(ages, prices, n);

    printf("Sorted list in ascending order with respect to Age and descending order with respect to Price:\n");
    for (int i = 0; i < n; i++) {
        printf("Age: %d, Price: %.2f\n", ages[i], prices[i]);
    }

    return 0;
}
