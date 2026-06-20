// q12. Write a program in C to Sorting an array in ascending (Selection sort)

#include <stdio.h>
#include <stdbool.h>

void swap(int arr[], int idx1, int idx2) {
    int temp = arr[idx1];
    arr[idx1] = arr[idx2]; 
    arr[idx2] = temp;
}

int getMaxindex(int arr[], int s, int e) {
    int max = s;
    for (int i = s; i <= e; i++) {
        if (arr[max] < arr[i]) {
            max = i;
        }
    }
    return max;
}

void selection(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int last = n - i - 1;
        int maxindex = getMaxindex(arr, 0, last);
        swap(arr, maxindex, last);
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

    selection(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}