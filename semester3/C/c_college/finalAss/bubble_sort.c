#include <stdio.h>

void sort(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            if (arr[j] < arr[j-1]) {
                arr[j] = arr[j] ^ arr[j -1];
                arr[j - 1] = arr[j] ^ arr[j -1];
                arr[j] = arr[j] ^ arr[j -1];
            }
        }
    }
}

int main() {
    int arr[] = {4, 0 , 1, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);

    

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}