#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *file1, *file2, *mergedFile;
    char ch;

    // Open first file for reading
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1.txt\n");
        exit(1);
    }

    // Open second file for reading
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error opening file2.txt\n");
        fclose(file1); // Close already opened file
        exit(1);
    }

    // Open third file for writing (merged file)
    mergedFile = fopen("merged.txt", "w");
    if (mergedFile == NULL) {
        printf("Error opening merged.txt\n");
        fclose(file1);
        fclose(file2);
        exit(1);
    }

    // Copy content of file1 to mergedFile
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergedFile);
    }

    // Add a newline or separator if desired between file contents
    fputc('\n', mergedFile); // Optional: add a newline between file contents

    // Copy content of file2 to mergedFile
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergedFile);
    }

    printf("Files merged successfully into merged.txt\n");

    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    return 0;
}
