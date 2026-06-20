#include <stdio.h>

int main() {
    int b, e, m, p, c;
    float avg;
    printf("enter your marks in Bengali, English, Maths, Physics and Chemistry : ");
    scanf("%d%d%d%d%d", &b, &e, &m, &p, &c);
    avg = (b + e + m + p + c) / 5;
    if (avg >= 90 && avg <= 100) printf("grade - O");
    else if (avg >= 80 && avg <= 89) printf("grade - E");
    else if (avg >= 70 && avg <= 79) printf("grade - A");
    else if (avg >= 60 && avg <= 69) printf("grade - B");
    else if (avg >= 50 && avg <= 59) printf("grade - C");
    else if (avg >= 40 && avg <= 49) printf("grade - D");
    else printf("grade - F");
    return 0;
}