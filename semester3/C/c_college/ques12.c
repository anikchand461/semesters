#include <stdio.h>
#include <math.h>

int main() {
    float s, p, i, n, t;
    printf("enter initial investment account : ");
    scanf("%f", &p);
    printf("enter annual interest rate : ");
    scanf("%f", &i);
    printf("number of periods : ");
    scanf("%f", &n);
    printf("enter number of years(time) : ");
    scanf("%f", &t);

    s = p * pow((1 + (i/n)), n * t);
    printf("Amount with the compound interest is: %f\n", s);
    return 0;
}