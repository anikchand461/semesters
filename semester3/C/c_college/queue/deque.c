#include <stdio.h>
#define n 5

int deque[n];
int f = -1, r = -1;

void insertFront(int x) {
    if ((f == 0 && r == n - 1) || (f == r + 1)) {
        printf("Queue is full\n");
        return;
    }
    if (f == -1) { 
        f = r = 0;
    }
    else if (f == 0) {
        f = n - 1;
    }
    else {
        f = f - 1;
    }
    deque[f] = x;
}

void insertEnd(int x) {
    if ((f == 0 && r == n - 1) || (f == r + 1)) {
        printf("Queue is full\n");
        return;
    }
    if (f == -1) { 
        f = r = 0;
    }
    else if (r == n - 1) {
        r = 0;
    }
    else {
        r = r + 1;
    }
    deque[r] = x;
}

void deleteFront() {
    if (f == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted element: %d\n", deque[f]);
    if (f == r) { 
        f = r = -1;
    }
    else if (f == n - 1) {
        f = 0;
    }
    else {
        f = f + 1;
    }
}

void deleteEnd() {
    if (f == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted element: %d\n", deque[r]);
    if (f == r) { 
        f = r = -1;
    }
    else if (r == 0) {
        r = n - 1;
    }
    else {
        r = r - 1;
    }
}

void display() {
    if (f == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Deque elements: ");
    int i = f;
    while (1) {
        printf("%d ", deque[i]);
        if (i == r)
            break;
        i = (i + 1) % n;
    }
    printf("\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertFront(5);
    insertEnd(30);
    insertFront(1);
    display();

    deleteFront();
    display();

    deleteEnd();
    display();

    insertEnd(40);
    display();

    return 0;
}