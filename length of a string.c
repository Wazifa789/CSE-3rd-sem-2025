#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string including spaces

    // Remove trailing newline character if present from fgets
    // This is important because fgets includes the newline if there's space
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    // Calculate length manually
    while (str[length] != '\0') {
        length++;
    }

    printf("The length of the string \"%s\" is %d.\n", str, length);

    return 0;
}
