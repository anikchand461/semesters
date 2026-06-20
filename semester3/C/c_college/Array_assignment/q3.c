// q3. Write a program in C to find the sum of all elements of the array.

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("enter array length : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("%d", sum);

    return 0;
}