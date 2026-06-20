#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int a = 6, b = 2;
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}


