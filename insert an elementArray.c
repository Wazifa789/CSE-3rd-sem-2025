#include <stdio.h>

int main() {
    int arr[100]; // Max size 100
    int n, i, element, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the position (1 to %d) to insert the element: ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right from the insertion point
        for (i = n; i >= position; --i) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = element; // Insert the element
        n++; // Increment size of the array

        printf("Array after insertion:\n");
        for (i = 0; i < n; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
