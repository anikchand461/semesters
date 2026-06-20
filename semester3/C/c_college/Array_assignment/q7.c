// q7. Write a program in C to find the maximum and minimum elements in an array.

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("enter array length : ");
    scanf("%d", &n);
    int arr[n];
    int max, min;
    max = arr[0];
    min = arr[0];
    printf("enter elements : ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("max = %d & min = %d", max, min);

    return 0;
}