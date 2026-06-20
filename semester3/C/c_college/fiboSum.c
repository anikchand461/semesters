#include <stdio.h>

int fibo(int n) {
    if (n < 2) return n;
    return  fibo(n - 1) + fibo(n - 2);
}

int fiboSum(int n) {
    if (n == 1) return 1;
    return fibo(n) + fiboSum(n - 1);
}

int main() {
    printf("%d", fiboSum(5));
}

