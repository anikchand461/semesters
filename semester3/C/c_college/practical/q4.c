#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("enter no. of elements in the array : ");
    scanf("%d", &n);
    int arr[n];

    printf("enter array elements : ");
    // input array elements 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    };

    for(int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            if (arr[j] < arr[j - 1]) {
                int t = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = t;
            }
        }
    }

    // print the shorted array

    printf("shorted array : ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}