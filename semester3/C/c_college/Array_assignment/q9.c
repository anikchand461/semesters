// q9. Write a program in C to Search an element in an array(Linear search)

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, key;
    bool isfound = false;
    printf("enter array length : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter key : ");
    scanf("%d", &key);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            isfound = true;
            break;
        }
    }
    if(isfound) {
        printf("found");
    } else {
        printf("not found");
    }

    return 0;
}