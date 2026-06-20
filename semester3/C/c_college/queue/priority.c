#include <stdio.h>
#define MAX 10
int pq[MAX];
int size = 0;

void enqueue(int value) {
    if (size == MAX) {
        printf("Queue is full\n");
        return;
    }
    int i = size - 1;
    while (i >= 0 && pq[i] > value) {
        pq[i + 1] = pq[i];
        i--;
    }
    pq[i + 1] = value;
    size++;

    printf("Inserted %d\n", value);
}

void dequeue() {
    int i;
    if (size == 0) {
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted element: %d\n", pq[0]);
    for (i = 0; i < size - 1; i++) {
        pq[i] = pq[i + 1];
    }
    size--;
}

void display() {
    int i;
    if (size == 0) {
        printf("Queue is empty\n");
        return;
    }
    printf("Priority Queue (sorted): ");
    for (i = 0; i < size; i++) {
        printf("%d ", pq[i]);
    }
    printf("\n");
}

int main() {
    enqueue(30);
    enqueue(10);
    enqueue(20);
    enqueue(5);
    enqueue(40);

    display();

    dequeue();
    display();

    enqueue(25);
    display();

    enqueue(12);
    display();

    dequeue();
    display();

    return 0;
}