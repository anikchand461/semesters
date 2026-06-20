// q5. Write a program in C to count the total number of duplicate elements in an array.

#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, duplicate = 0;
    printf("enter array length : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    sort(arr, n);

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            duplicate++;
        }
    }

    printf("%d", duplicate);

    return 0;
}