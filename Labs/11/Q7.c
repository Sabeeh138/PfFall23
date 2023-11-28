#include <stdio.h>
#include <string.h>

// Define the Book structure
struct Book {
    int accession_number;
    char author_name[50];
    char book_title[100];
    int is_issued;  // 0 for not issued, 1 for issued
};

// Function to add a new book to the library
void addBook(struct Book *library, int *numBooks) {
    printf("Enter Accession Number: ");
    scanf("%d", &library[*numBooks].accession_number);

    printf("Enter Author Name: ");
    scanf("%s", library[*numBooks].author_name);

    printf("Enter Book Title: ");
    scanf("%s", library[*numBooks].book_title);

    library[*numBooks].is_issued = 0;  // Default: book is not issued

    (*numBooks)++;  // Increment the number of books in the library
}

// Function to display details of all books in the library
void displayBooks(const struct Book *library, int numBooks) {
    printf("\nLibrary Books:\n");
    printf("%-15s%-30s%-30s%s\n", "Accession No.", "Author Name", "Book Title", "Status");

    for (int i = 0; i < numBooks; i++) {
        printf("%-15d%-30s%-30s", library[i].accession_number, library[i].author_name, library[i].book_title);

        if (library[i].is_issued == 0) {
            printf("Not Issued\n");
        } else {
            printf("Issued\n");
        }
    }
}

// Function to check whether a book is issued or not
void checkIssuedStatus(const struct Book *library, int numBooks) {
    int accession_number;
    printf("Enter Accession Number to check status: ");
    scanf("%d", &accession_number);

    int found = 0;

    for (int i = 0; i < numBooks; i++) {
        if (library[i].accession_number == accession_number) {
            found = 1;
            if (library[i].is_issued == 0) {
                printf("Book with Accession Number %d is not issued.\n", accession_number);
            } else {
                printf("Book with Accession Number %d is issued.\n", accession_number);
            }
            break;
        }
    }

    if (!found) {
        printf("Book with Accession Number %d not found in the library.\n", accession_number);
    }
}

int main() {
    struct Book library[100];  // Assuming a maximum of 100 books in the library
    int numBooks = 0;  // Number of books currently in the library

    int choice;

    do {
        printf("\nLibrary Menu:\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Check Issued Status\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(library, &numBooks);
                break;
            case 2:
                displayBooks(library, numBooks);
                break;
            case 3:
                checkIssuedStatus(library, numBooks);
                break;
            case 4:
                printf("Exiting Library Menu.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
