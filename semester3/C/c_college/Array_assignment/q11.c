// q11. Write a program in C to Sorting an array in ascending (Using Bubble sort)

#include <stdio.h>
#include <stdbool.h>

void bubble(int arr[], int n) {
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 1; j < n - i; j++) {
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void printArray(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int n;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubble(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);    

    return 0;
}