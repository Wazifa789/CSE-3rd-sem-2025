#include <stdio.h>
#include <string.h> // For strlen()

int main() {
    char str[100];
    int length, i, j;
    int isPalindrome = 1; // Assume it's a palindrome initially

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character if present
    str[strcspn(str, "\n")] = 0;

    length = strlen(str);

    // Compare characters from start and end
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
