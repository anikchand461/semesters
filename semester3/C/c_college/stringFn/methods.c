#include <stdio.h>
#include <string.h>

void join(char a[], char b[]) {
    strcat(a, b);
    printf("combined string : %s\n", a);
}

void length(char a[]) {
    printf("%d\n", (int)strlen(a));
}

void compare(char a[], char b[]) {
    printf("comparison : %d\n", strcmp(a, b));
}

void copy(char a[], char c[]) {
    strcpy(c, a);
    printf("%s\n", c);
}

void firstOccurence(char a[]) {
    char* result = strchr(a, 'A');
    if (result) printf("found");
    else printf("not found");
}

int main() {
    char a[50];
    char b[50];
    char c[50];

    // input the strings
    scanf("%s", a);
    scanf("%s", b);

    join(a, b);
    length(a); 
    compare(a, b);
    copy(a, c);
    firstOccurence(a);

}