#include <stdio.h>

int main() {
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int l = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            l++;
        }
    }

    if (n == 1) {
        printf("not prime");
    } else if (l > 0) {
        printf("not prime");
    } else {
        printf("prime");
    }

    return 0;
}