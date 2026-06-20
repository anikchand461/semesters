#include <stdio.h>

void InnerLoop(int arr[], int n, int i, int minIndex) {
    if (i == n) {
        int t = arr[0];
        arr[0] = arr[minIndex];
        arr[minIndex] = t;
        return;
    }

    if (arr[i] < arr[minIndex]) {
        minIndex = i;
    }

    InnerLoop(arr, n, i + 1, minIndex);
}

void OuterLoop(int arr[], int n) {
    if (n == 1) return;
    InnerLoop(arr, n, 1, 0);
    OuterLoop(arr + 1, n - 1); 
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

    printf("\n");

    OuterLoop(arr, n);

    printf("sorted array : ");
    handleArray(arr, n, 1);

    return 0;
}