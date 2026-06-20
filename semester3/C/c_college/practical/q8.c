#include <stdio.h>

int main() {
    int n;
    printf("enter no. of elements : ");
    scanf("%d", &n);

    int arr[n];

    printf("enter array elements : ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("enter key : ");
    scanf("%d", &key);

    // find an element
    int l = -1;
    for (int i = 0; i < n; i++) {
        if (key == arr[i]) {
            l = i;
        }
    }

    if (l < 0) {
        printf("element not found");
    } else {
        printf("the element is at the index : %d", l);
    }

    return 0;
}