#include <stdio.h>

int main() {
    float c,f;
    printf("enter temperature in farenheit : ");
    scanf("%f", &f);
    c = ((f-32) * 5) / 9;
    printf("temperature in celcius : %f", c);
    return 0;
}

