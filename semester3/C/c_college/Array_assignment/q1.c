// q1. Write a program in C to store elements in an array and print them.

#include <stdio.h>

int main() {
    int arr[10];
    printf("enter elements : ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}