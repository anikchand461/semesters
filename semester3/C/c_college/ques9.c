#include <stdio.h>

int main() {
    int a = 6;
    float b = 6.7;
    double c = 8.97;
    char d = 'a';
    printf("%lu\n",sizeof(a));
    printf("%lu\n", sizeof(b));
    printf("%lu\n", sizeof(c));
    printf("%lu\n", sizeof(d));
}