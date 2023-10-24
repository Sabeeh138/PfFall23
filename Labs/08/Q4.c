/*
* Programmer : Muhammad Sabeeh
* Desc : swapping values using func
/*
#include <stdio.h>
#include <string.h>

int main() {
    char enteredPassword[50];
    char storedPassword[] = "Hamzaukash";

    printf("Enter your password: ");
    scanf("%s", enteredPassword);

    // Check if the entered password is at least 8 characters long
    if (strlen(enteredPassword) < 8) {
        printf("Login failed. Password is too short.\n");
    } else {
        // Compare the entered password to the stored password
        if (strcmp(enteredPassword, storedPassword) == 0) {
            printf("Login successful. Welcome!\n");
        } else {
            printf("Login failed. Incorrect password.\n");
        }
    }

    return 0;
}
