// q13. Write a program in C to delete an element at a desired position from an array.

#include <stdio.h>

int main() {
    int n, key;
    printf("enter array length : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter index to delete : ");
    scanf("%d", &key);
    
    if (key < 0 || key > n - 1) {
        printf("invalid index entered");
    } else {
        for (int i = key; i < n - 1; i++) {
            arr[i] = arr[i+1];
        }

        // decrease array length
        n--;

        printf("array after deletion of targated index ; ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}