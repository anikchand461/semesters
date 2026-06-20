#include <stdio.h>

int bs(int arr[], int s, int e, int key) {
    if (s > e) return -1;
    int m = s + (e - s) / 2;
    if (arr[m] == key) return m;
    else if (key > arr[m]) return bs(arr, m + 1, e, key);
    return bs(arr, s, m - 1, key);
}

int main() {
    int n, key;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key: ");
    scanf("%d", &key);

    int ans = bs(arr, 0, n - 1, key);
    
    if (ans >= 0) {
        printf("Answer found at index: %d\n", ans);
    } else {
        printf("Answer not found\n");
    }

    return 0;
}