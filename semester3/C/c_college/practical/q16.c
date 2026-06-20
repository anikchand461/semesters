#include <stdio.h>

int main() {
    int arr[] = {9, 2, 99, 1, 7, 2};
    int max = arr[0];
    int min = arr[0];

    // find max
    for (int i = 0; i < 6; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    // find min
    for (int i = 0; i < 6; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    printf("max : %d, min : %d", max, min);

    return 0;
}