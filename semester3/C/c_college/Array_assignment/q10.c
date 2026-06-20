// q10. Write a program in C to Search an element in an array(Binary search)

#include <stdio.h>

// Binary search function
int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;  // Target found, return index
        } else if (arr[mid] < target) {
            start = mid + 1;  // Move right
        } else {
            end = mid - 1;    // Move left
        }
    }

    return -1;  // Target not found
}

int main() {
    int arr[10];
    int target;

    printf("Enter the elements of the array (sorted): ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    // Call the binarySearch function
    int result = binarySearch(arr, 8, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
}