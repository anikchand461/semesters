// Write a C program to calculate simple and compound interest. 

#include <stdio.h>
#include <math.h>

float SimpleInterest(float p, float r, int t) {
    float ans = (p * r * t) / 100;
    return ans;
}

float CompoundInterest(float p, float r, int n, int t) {
    float ratio = r / (100 *n);
    int power = n * t;
    float ans = p * pow((1 + ratio), power);
    return ans; 
}

int main() {
    float p, r;
    int n , t;

    printf("enter principal amount : ");
    scanf("%f", &p);

    printf("enter rate : ");
    scanf("%f", &r);

    printf("enter time in years : ");
    scanf("%d", &t);

    printf("enter no. of times interest is compounded per year : ");
    scanf("%d", &n);

    float si = SimpleInterest(p, r, t);
    float ci = CompoundInterest(p, r, n, t);

    printf("simple interest : %.2f", si);
    printf("\n");
    printf("compound interest : %.2f", ci);

    return 0;
}