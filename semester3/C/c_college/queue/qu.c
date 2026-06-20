#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == N-1) {
        printf("overflow");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("underflow");
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

void display() {
    int i;
    if (rear == -1 && front == -1) {
        printf("queue is empty");
    } else {
        for (i = front; i < rear+1; i++) {
            printf("%d ", queue[i]);
        }
    }
}

int main() {
    printf("hello");
    enqueue(5);
    enqueue(4);
    enqueue(8);
    display();
    return 0;
}