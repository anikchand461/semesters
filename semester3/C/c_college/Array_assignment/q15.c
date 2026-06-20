// q15. Convert decimal number to its equivalent binary number.

#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32];
    int i = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary equivalent: ");
    decimalToBinary(num);

    return 0;
}