#include <stdio.h>

int main() {
    long long num; // Use long long for larger numbers
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle 0 as a special case
    if (num == 0) {
        count = 1;
    } else {
        // Make number positive for counting digits
        if (num < 0) {
            num = -num;
        }
        while (num != 0) {
            num /= 10;
            ++count;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
