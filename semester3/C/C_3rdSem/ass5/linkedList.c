#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;    
};

struct Node* head = NULL;
struct Node* NewNode(int x) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = x;
    n->next = NULL;
    return n;
}

void insertAtBeginning(int x) {
    struct Node* n = NewNode(x);
    n->next = head;
    head = n;
}

void insertAtEnd(int x) {
    struct Node* n = NewNode(x);
    if (head == NULL) {
        head = n;
        return;
    }
    struct Node* t = head;
    while (t->next != NULL) {
        t = t->next;
    }
    t->next = n;
}

void insertAtPos(int x, int p) {
    if (p == 1) {
        insertAtBeginning(x);
        return;
    }
    struct Node* t = head;
    for (int i = 0; i < p-1 && t != NULL; i++) {
        t = t->next;
    }
    if (t == NULL) {
        printf("Invalid position");
        return;
    }
    struct Node* n = NewNode(x);
    n->next = t->next;
    t->next = n;
}oo

void traverse() {
    struct Node* t = head;
    while (t != NULL) {
        printf("%d->", t->data);
        t = t->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* a = NewNode(7);
    struct Node* b = NewNode(6);
    struct Node* c = NewNode(2);
    struct Node* d = NewNode(9);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    head = a;

    traverse();

    return 0;
}

