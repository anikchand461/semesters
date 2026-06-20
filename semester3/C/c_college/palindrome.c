#include <stdio.h>
#include <stdbool.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

bool checkPalindrome(char str[], int start, int end) {
    if (start == end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }

    return checkPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100] = "oyo";

    int size = stringLength(str);

    if (checkPalindrome(str, 0, size - 1)) {
        printf("true");
    } else {
        printf("flase");
    }

    return 0;
}