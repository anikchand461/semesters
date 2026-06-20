#include <stdio.h>

#define N 5
int stack[N];
int top = -1;

void push() {
    int k;
    printf("enter number : ");
    scanf("%d", &k);
    if (top == (N-1)) {
        printf("overflow");
    } else {
        top++;
        stack[top] = k;
    }
}

void pop() {
    int item;
    if (top == -1) {
        printf("underflow");
    } else {
        item = stack[top];
        top--;
        printf("the popped item is : %d", item);
    }
}

void peak() {
    int item;
    if (top == -1) {
        printf("underflow");
    } else {
        item = stack[top];
        printf("the peak item is : %d", item);
    }
}

void display() {
    int i;
    for (i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
}

int main() {
    int k;
    printf("enter 1 for push\nenter 2 for pop\nenter 3 for peek\nenter 4 for display : ");
    scanf("%d", &k);
    switch (k) {
        case 1: push(); break;
        case 2: pop(); break;
        case 3: peak(); break;
        case 4: display(); break;
        default: printf("enter valid input");
    }
    return 0;
}