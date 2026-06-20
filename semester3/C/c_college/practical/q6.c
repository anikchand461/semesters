#include <stdio.h>

int reverse(int n) {
    if (n >= -9 && n <= 9) {
        return n;
    }
    int ans = 0;
    while (n != 0) {
        ans = ans * 10 + n % 10;
        n /= 10;
    }

    return ans;
}

int main() {
    int n;
    printf("enter a : ");
    scanf("%d", &n);

    printf("%d", reverse(n));

    return 0;
}