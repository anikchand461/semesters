#include <stdio.h>

void pascal(int n) {
    int arr[n][n];
    arr[0][0] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;

    if (n == 1) {
        printf("%d", arr[0][0]);
    } else if (n == 2) {
        printf("%d\n", arr[0][0]);
        printf("%d %d", arr[1][0], arr[1][1]);
    } else {
        printf("%d\n", arr[0][0]);
        printf("%d %d\n", arr[1][0], arr[1][1]);
        for (int row = 2; row < n; row++) {
            for (int col = 0; col <= row; col++) {
                if (col == 0 || row == col) {
                    arr[row][col] = 1;
                } else {
                    arr[row][col] = arr[row-1][col-1] + arr[row-1][col];
                }
                printf("%d ", arr[row][col]);
            }
            printf("\n");
        }
    }
}

int main() {
    int n;
    printf("enter n : ");
    scanf("%d", &n);

    pascal(n);
}
