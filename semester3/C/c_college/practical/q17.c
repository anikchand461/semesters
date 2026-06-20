#include <stdio.h>

int fact(int n) {
    if (n == 0) return 1;
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}