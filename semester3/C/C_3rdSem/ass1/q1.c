// WAP to store n elements in an arrray. Perform the following  - 
// a. insert element at the beginning b. specific location c. at end

#include <stdio.h>
int main() {
    int arr[100], n, i, pos, element;
    printf("enter no. of elements : ");
    scanf("%d", &n);
    printf("enter %d elements : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to insert at beginning : ");
    scanf("%d", &element);
    for (i = n; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = element;
    n++;
    printf("Array after inserting the element at the first : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\n Enter position to insert the new element : ");
    scanf("%d", &pos);
    printf("Enter element to insert at position %d : ", pos);
    scanf("%d", &element);
    
    if (pos > n-1) {
        printf("invalid position");
    } else {
        for (i = n; i > pos; i--) {
            arr[i] = arr[i-1];
        }
        arr[pos] = element;
    }
    n++;
    printf("Array after inserting the element at the desired location : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter element to insert at last : ");
    scanf("%d", &element);

    arr[n] = element;
    n++;

    printf("Array after inserting the element at last : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}