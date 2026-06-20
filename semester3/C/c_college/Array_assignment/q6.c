// q6. Write a program in C to print all unique elements in an array.

#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter array length: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort the array
    sort(arr, n);
    
    printf("Unique elements in the array are:\n");
    
    // Iterate through the sorted array and print unique elements
    for (int i = 0; i < n; i++) {
        // Check if current element is the first or different from previous and next
        if ((i == 0 || arr[i] != arr[i - 1]) && (i == n - 1 || arr[i] != arr[i + 1])) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");
    return 0;
}