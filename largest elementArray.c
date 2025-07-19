#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int largest = arr[0]; // Assume first element is largest

    for (i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element in the array: %d\n", largest);

    return 0;
}
