#include <stdio.h>

// Function to decide car usage
int decideCarUsage(int carNumber, int day) {
    if ((carNumber % 2 == 0 && day % 2 == 0) || (carNumber % 2 != 0 && day % 2 != 0)) {
        return 1; // Use the car
    } else {
        return 0; // Do not use the car
    }
}

int main() {
    int carNumber, day;

    // Input the car's numeric part and the day of the week (1 to 7)
    printf("Enter cars number: ");
    scanf("%d", &carNumber);
    printf("Enter the day of week (1 - 7): ");
    scanf("%d", &day);

    // Call the decideCarUsage function to make the decision
    if (decideCarUsage(carNumber, day)) {
        printf("You should use your car on this day.\n");
    } else {
        printf("You should not use your car on this day.\n");
    }

    return 0;
}
