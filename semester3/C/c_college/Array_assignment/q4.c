// q4. Write a program in C to copy the elements of one array into another array.

#include <stdio.h>

int main() {
    int n;
    printf("enter array length : ");
    scanf("%d", &n);
    int arr[n], copyarr[n];
    printf("enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // copy arr -> copyarr
    for (int i = 0; i < n; i++) {
        copyarr[i] = arr[i];
    }
    // print elements of copyarr
    for (int i = 0; i < n; i++) {
        printf("%d ", copyarr[i]);
    }

    return 0;
}