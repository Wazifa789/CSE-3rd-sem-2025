#include <stdio.h>

int main() {
    int arr[100]; // Max size 100
    int n, i, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (1 to %d) of the element to delete: ", n);
    scanf("%d", &position);

    if (position < 1 || position > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left from the deletion point
        for (i = position - 1; i < n - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrement size of the array

        printf("Array after deletion:\n");
        for (i = 0; i < n; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
