#include <stdio.h>
#define n 5
int queue[n];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } 
    else if ((rear + 1) % n == front) { 
        printf("Queue is full\n");
    }
    else {
        rear = (rear + 1) % n;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Underflow\n");
    }
    else if (front == rear) { 
        front = rear = -1;
    } 
    else {
        front = (front + 1) % n;
    }
}

void traverse() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
        return;
    }

    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % n;
    }
    printf("\n");
}

int main() {
    enqueue(8);
    enqueue(1);
    enqueue(4);
    enqueue(9);
    traverse();
    dequeue();
    traverse();
    enqueue(11);
    enqueue(15);
    traverse();
    dequeue();
    traverse();
    return 0;
}