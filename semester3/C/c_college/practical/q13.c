#include <stdio.h>

int SumDigits(int n) {
    int sum = 0;
    int ld;
    while (n != 0) {
        ld = n % 10;
        sum += ld;
        n /= 10;
    }

    return sum < 0 ? (-1) * sum : sum;
}

int main() {
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    printf("%d", SumDigits(n));
    
    return 0;
}