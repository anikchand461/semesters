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

int main() {
    struct Node* n = NewNode(7);
    printf("%d", n->data);
    return 0;
}
