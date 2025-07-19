#include <stdio.h>
#include <string.h> // For strlen() and strcpy() (though problem implies without library for length)

int main() {
    char sourceString[100], destinationString[100];
    int i = 0;

    printf("Enter a string: ");
    // Use fgets to read string including spaces
    fgets(sourceString, sizeof(sourceString), stdin);

    // Remove trailing newline character if present from fgets
    sourceString[strcspn(sourceString, "\n")] = 0;

    // Manual copy
    while (sourceString[i] != '\0') {
        destinationString[i] = sourceString[i];
        i++;
    }
    destinationString[i] = '\0'; // Null-terminate the destination string

    printf("Source string: %s\n", sourceString);
    printf("Destination string: %s\n", destinationString);

    return 0;
}
