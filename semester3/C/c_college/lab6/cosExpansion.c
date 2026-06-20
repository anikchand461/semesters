#include <stdio.h>
#include <math.h>

int main() {
    int n, x, ans = 1;
    printf("enter n : ");
    scanf("%d", &n);
    printf("enter value of x : ");
    scanf("%d", &x);
    for (int i = 2; i <= n; i += 2) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        ans += 
    }
}