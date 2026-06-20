#include <stdio.h>

void fibo(int n) {
    int a = 0, b = 1, c;

    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);

    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main() {
    int n;
    printf("enter n : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
    } else {
        printf("Fibonacci Series: ");
        fibo(n);
    }
    
    return 0;
}