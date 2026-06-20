#include <stdio.h>

int main()
{
    int a1, b1, a2, b2;

    printf("Enter the first complex number (format: a + bi): ");
    scanf("%d %*c %d%*c", &a1, &b1);
    printf("Enter the second complex number (format: a + bi): ");
    scanf("%d %*c %d%*c", &a2, &b2);

    int real_sum = a1 + a2;
    int imag_sum = b1 + b2;

    printf("Sum of the complex numbers: %d + %di\n", real_sum, imag_sum);

    return 0;
}

