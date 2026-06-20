// q8. Write a program in C to separate odd and even integers into separate arrays.

#include <stdio.h>

int main() {
    int n, oc = 0, ec = 0;
    printf("enter array length : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements : ");
    // input elements in the main array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // count even and odd elements
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            ec++;
        } else {
            oc++;
        }
    }

    int oddarr[oc], evenarr[ec];
    int oddindex = 0, evenindex = 0;

    // add elements to the odd and even array
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenarr[evenindex] = arr[i];
            evenindex++;
        } else {
            oddarr[oddindex] = arr[i];
            oddindex++;
        }
    }

    // printing the odd array
    printf("odd array : \n");
    printf("[");
    for (int i = 0; i < oc; i++) {
        printf("%d ", oddarr[i]);
    }
    printf("]");

    printf("\n");

    // printing the even array
    printf("even array : \n");
    printf("[");
    for (int i = 0; i < ec; i++) {
        printf("%d ", evenarr[i]);
    }
    printf("]");

    return 0;
}