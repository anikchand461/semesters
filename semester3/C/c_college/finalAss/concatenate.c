#include <stdio.h>
#include <string.h>

void cct(char *s, char *t, int len1, int len2) {
    s += len1;       

    while (*t != '\0') {
        *s = *t; 
        s++;     
        t++;    
    }

    *s = '\0';
}

int main() {
    char s1[20] = "abc";
    char s2[] = "def";

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    cct(s1, s2, len1, len2);

    printf("%s\n", s1);

    return 0;
}