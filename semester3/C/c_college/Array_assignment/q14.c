// q14. Write a program in C to find the second largest and second smallest element in an array.

#include <stdio.h>
#include <stdbool.h>

void bubble(int arr[], int n) {
    bool isswapped;
    for (int i = 0; i < n - 1; i++) {
        isswapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isswapped = true;
            }
        }
        if (! isswapped) {
            break;
        }
    }
}

int main() {
    int n;
    printf("enter array length : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    bubble(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    if (n > 2) {
        printf("2nd largest = %d\n", arr[n - 2]);
        printf("2nd smallest = %d", arr[1]);
    } else {
        printf("not enough elements");
    }

    return 0;
}