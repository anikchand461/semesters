#include <stdio.h>

float sum(int n, int i) {
    if (i == 1) return 1.0;
    return 1.0 / i + sum(n, i - 1);
}

int main() {
    int n = 4;
    printf("%f", sum(n, n));
    return 0;
}