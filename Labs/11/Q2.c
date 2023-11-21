#include <stdio.h>

// Define the structure for engine parts information
struct EnginePart {
    char serial_number[4];
    int year_of_manufacture;
    char material[20];
    int quantity_manufactured;
};

// Function to retrieve information on parts with serial numbers between BB1 and CC6
void retrieveInformation(struct EnginePart engineParts[], int numParts) {
    printf("Information on parts with serial numbers between BB1 and CC6:\n");
    int i;
    
    for (i = 0; i < numParts; i++) {
        // Compare the serial number with BB1 and CC6
        if (engineParts[i].serial_number[0] == 'B' &&
            engineParts[i].serial_number[1] >= 'B' && engineParts[i].serial_number[1] <= 'C' &&
            engineParts[i].serial_number[2] >= '1' && engineParts[i].serial_number[2] <= '6') {
            printf("Serial Number: %s\n", engineParts[i].serial_number);
            printf("Year of Manufacture: %d\n", engineParts[i].year_of_manufacture);
            printf("Material: %s\n", engineParts[i].material);
            printf("Quantity Manufactured: %d\n", engineParts[i].quantity_manufactured);
            printf("\n");
        }
    }
}

int main() {
    // Assuming there are not more than 100 engine parts
    const int MAX_PARTS = 100;
    int i;

    // Create an array to store engine parts information
    struct EnginePart engineParts[MAX_PARTS];

    // Prompt user to enter details for each engine part
    int numParts;
    printf("Enter the number of engine parts (up to %d): ", MAX_PARTS);
    scanf("%d", &numParts);

    for ( i = 0; i < numParts; i++) {
        printf("Enter details for Engine Part %d:\n", i + 1);
        printf("Serial Number: ");
        scanf("%s", engineParts[i].serial_number);
        printf("Year of Manufacture: ");
        scanf("%d", &engineParts[i].year_of_manufacture);
        printf("Material: ");
        scanf("%s", engineParts[i].material);
        printf("Quantity Manufactured: ");
        scanf("%d", &engineParts[i].quantity_manufactured);
    }

    // Retrieve information on parts with serial numbers between BB1 and CC6
    retrieveInformation(engineParts, numParts);

    return 0;
}
