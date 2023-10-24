/*
* Programmer : Muhammad Sabeeh
* Desc : input a string and find the count of a char used
/*
  
int main() {
    char string[100];
    char searchChar;
    int j = 0;
	  int i = 0;
    // Input the text from the user
    printf("Enter a text: ");
    fgets(string, sizeof(string), stdin);

    // Input the character to search for
    printf("Enter a character to search for: ");
    scanf(" %c", &searchChar);

    // Search for the character and count occurrences
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == searchChar) {
            j++;
        }
    }

    // Printing total count of occurrences
    printf("Total occurrences of '%c' in the text: %d\n", searchChar, j);

    return 0;
}
