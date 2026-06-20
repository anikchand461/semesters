// apply quick sort in C

#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while ( i < j) {
        while ((arr[i] <= pivot) && (i <= high-1)) {
            i++;
        }
        while ((arr[j] > pivot) && (j >= low+1)) {
            j--;
        }
        if (i < j) swap(&arr[i], &arr[j]);
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main() {
    int n, i;
    printf("enter no. of elements in the array : ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sorted Array : ");
    quickSort(arr, 0, n-1);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;

}