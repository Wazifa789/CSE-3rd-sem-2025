#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // ptr points to the first element of arr
    int i;

    printf("Original array elements using pointer:\n");
    for (i = 0; i < 5; ++i) {
        printf("Element at address %p: %d\n", (void *)(ptr + i), *(ptr + i));
    }

    printf("\nDemonstrating pointer arithmetic:\n");

    // Incrementing a pointer
    printf("ptr points to %d\n", *ptr); // Currently points to 10
    ptr++; // ptr now points to 20
    printf("After ptr++, ptr points to %d\n", *ptr);

    // Decrementing a pointer
    ptr--; // ptr now points back to 10
    printf("After ptr--, ptr points to %d\n", *ptr);

    // Adding an integer to a pointer
    printf("Value at (ptr + 2): %d\n", *(ptr + 2)); // Points to 30

    // Subtracting an integer from a pointer
    printf("Value at (ptr - 0): %d\n", *(ptr - 0)); // Points to 10 (no change)

    // Subtracting two pointers (gives the number of elements between them)
    int *ptr2 = &arr[4]; // ptr2 points to 50
    printf("Difference between ptr2 and ptr: %td\n", ptr2 - ptr); // Should be 4

    return 0;
}
