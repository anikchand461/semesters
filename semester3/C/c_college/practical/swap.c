// Write a C program to swap values of two variables with and without using a third variable.

#include <stdio.h>

void without3rdVar(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void with3rdvar(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {

    int x = 8, y = 3;
    without3rdVar(&x, &y);
    printf("%d %d", x, y);

    printf("\n");

    x = 8, y = 3;
    with3rdvar(&x, &y);
    printf("%d %d", x, y);

    return 0;
}