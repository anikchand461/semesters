#include <stdio.h>

int largest(int* arr, int n) {
    int* max = arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > *max) {
            max = arr + i;
        }
    }
    return *max;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    printf("Largest number: %d\n", largest(arr, n));

    return 0;
}