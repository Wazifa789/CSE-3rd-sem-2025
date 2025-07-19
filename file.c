#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *fp;
    char data[100];

    // --- Writing to a file ---
    fp = fopen("example.txt", "w"); // "w" for write mode (creates or overwrites)
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter data to write to the file (max 99 characters): ");
    fgets(data, sizeof(data), stdin); // Read input from user

    fprintf(fp, "%s", data); // Write the data to the file
    printf("Data written to example.txt successfully.\n");
    fclose(fp); // Close the file

    // --- Reading from a file ---
    fp = fopen("example.txt", "r"); // "r" for read mode
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\nReading data from example.txt:\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data); // Print the read data
    }
    printf("End of file.\n");
    fclose(fp); // Close the file

    return 0;
}
