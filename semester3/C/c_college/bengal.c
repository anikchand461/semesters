#include <stdio.h>
#include <string.h>

// recursive printing
void printchar(char arr[], int j) {
    if (j < 0) return;
    printchar(arr, j - 1);
    printf("%c", arr[j]);
}

void printline(char arr[], int n, int i) {
    if (i == n) return;
    printchar(arr, i);
    printf("\n");
    printline(arr, n, i+1);
}


// normal printing
void printPattern(char arr[]) {
    for (int i = 0; i < strlen(arr); i++) {
        for (int j = 0; j < i+1; j++) {
            printf("%c", arr[j]);
        }
        printf("\n");
    }
}

int main() {
    char arr[100] = "BENGAL";
    printPattern(arr);  // normal printing using nested loop
    printline(arr, strlen(arr), 0);  // printing using resursion
    return 0;
}