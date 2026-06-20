#include <stdio.h>

void merge(int arr[], int low, int mid, int high) {
    int i, j, k;
    int leftLen = mid - low + 1;
    int rightLen = high - mid;

    int leftArr[leftLen], rightArr[rightLen];

    for (i = 0; i < leftLen; i++) {
        leftArr[i] = arr[low+i];
    }
    for (j = 0; j < rightLen; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    i = 0, j = 0, k = low;
    while (i < leftLen && j < rightLen) {
        if (leftArr[i] < rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < leftLen) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < rightLen) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int i, n;
    printf("enter no. of elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // display original array:
    printf("Original array : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    mergeSort(arr, 0, n-1);

    // display sorted array
    printf("\nsorted array : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}