#include <stdio.h>

void InnerLoop(int arr[], int n, int i) {
    if (i == n - 1) return;
    if (arr[i] > arr[i+1]) {
        int t = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = t;
    }

    InnerLoop(arr, n, i + 1);
}

void OuterLoop(int arr[], int n) {
    if (n == 1) return;
    InnerLoop(arr, n, 0);
    OuterLoop(arr, n - 1);
}

void handleArray(int arr[], int n, int p) {
    if (p == 1) {
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    }
}

int main() {
    int n;
    printf("enter number of elements in array : ");
    scanf("%d", &n);
    int arr[n];

    printf("enter array elements : ");
    handleArray(arr, n, 0);
    
    printf("unsorted array : ");
    handleArray(arr, n, 1);

    printf("\n");

    OuterLoop(arr, n);

    printf("sorted array : ");
    handleArray(arr, n, 1);

    return 0;
}