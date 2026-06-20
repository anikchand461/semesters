#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0) return 0;

    int sqn = sqrt(n);

    for (int i = 2; i <= sqn; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    if (isPrime(n)) printf("prime");
    else printf("not prime");

    return 0;
}