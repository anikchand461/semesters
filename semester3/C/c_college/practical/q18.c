#include <stdio.h>

int fibo(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibo(n - 2) + fibo(n - 1);
}

int main() {
    int n;
    printf("enter n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", fibo(i));
    }
    
    return 0;
}