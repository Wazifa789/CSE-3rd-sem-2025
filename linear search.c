#include <stdio.h>

int main() {
    int arr[100];
    int n, i, searchElement;
    int found = 0; // Flag to indicate if element is found

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    for (i = 0; i < n; ++i) {
        if (arr[i] == searchElement) {
            printf("%d found at position %d (index %d).\n", searchElement, i + 1, i);
            found = 1;
            break; // Element found, no need to continue searching
        }
    }

    if (!found) {
        printf("%d is not found in the array.\n", searchElement);
    }

    return 0;
}
