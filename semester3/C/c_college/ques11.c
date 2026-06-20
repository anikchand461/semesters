#include <stdio.h>

int main() {
    float p,r,t;
    printf("enter principal amount : ");
    scanf("%f", &p);
    printf("enter rate of interest : ");
    scanf("%f", &r);
    printf("enter time in year : ");
    scanf("%f", &t);
    printf("simple interest = %f", (p*r*t)/100);
    return 0;
}