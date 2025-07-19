#include <stdio.h>
#include <ctype.h> // For toupper() function

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c to consume leftover newline

    ch = toupper(ch); // Convert to uppercase for easier comparison

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else if ((ch >= 'A' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
