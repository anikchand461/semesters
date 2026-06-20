#include <stdio.h>

int length(char str[]) {
    int len = 0;

    int i = 0;
    while (str[i] != '\0') {
        len++;
        i++;
    }

    return len;
}

int main() {
    char str[100];
    printf("enter a string : ");
    scanf("%s", str);

    int len = length(str);

    printf("%d", len);
    
    return 0;
}