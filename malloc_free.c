#include <stdio.h>
#include <stdlib.h> // For malloc(), free()

int main() {
    int *arr;
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers using malloc()
    arr = (int *)malloc(n * sizeof(int));

    // Check if malloc was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Indicate an error
    }

    printf("Memory allocated successfully.\n");

    // Get elements from the user
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the elements
    printf("Elements entered:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);
    arr = NULL; // Set pointer to NULL after freeing
    printf("Memory freed successfully.\n");

    return 0;
}
