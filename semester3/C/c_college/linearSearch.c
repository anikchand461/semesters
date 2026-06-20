#include <stdio.h>

int ls(int arr[], int i, int n, int key) {
    if (i == n) return -1;
    if (arr[i] == key) return i;
    return ls(arr, i+1, n, key);
}

int main() {
    int n, key;
    printf("enter number of elements in array : ");
    scanf("%d", &n);
    printf("enter key : ");
    scanf("%d", &key);
    int arr[n];

    printf("enter array elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int ans = ls(arr, 0, n, key);
    
    if (ans >= 0) {
        printf("answer found at index : %d", ans);
    } else {
        printf("answer not found");
    }

    return 0;
}