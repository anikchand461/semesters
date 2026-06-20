#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* newNode(int x) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = x;
    n->next = NULL;
    return n;
}

void insertBeg(int x) {
    struct Node* n = newNode(x);
    n->next = head;
    head = n;
}

void insertEnd(int x) {
    struct Node* n = newNode(x);
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

void insertPos(int x, int p) {
    if (p == 1) {
        insertBeg(x);
        return;
    }
    struct Node* t = head;
    for (int i = 1; i < p - 1 && t != NULL; i++) {
        t = t->next;
    }
    if (t == NULL) {
        printf("Invalid position\n");
        return;
    }
    struct Node* n = newNode(x);
    n->next = t->next;
    t->next = n;
}

void delBeg() {
    if (head == NULL) {
        printf("Empty list\n");
        return;
    }
    struct Node* t = head;
    head = head->next;
    free(t);
}

void delEnd() {
    if (head == NULL) {
        printf("Empty list\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct Node* t = head;
    while (t->next->next != NULL) {
        t = t->next;
    }
    free(t->next);
    t->next = NULL;
}

void delPos(int p) {
    if (head == NULL) {
        printf("Empty list\n");
        return;
    }
    if (p == 1) {
        delBeg();
        return;
    }
    struct Node* t = head;
    for (int i = 1; i < p - 1 && t != NULL; i++) {
        t = t->next;
    }
    if (t == NULL || t->next == NULL) {
        printf("Invalid position\n");
        return;
    }
    struct Node* d = t->next;
    t->next = d->next;
    free(d);
}

void display() {
    struct Node* t = head;
    while (t != NULL) {
        printf("%d -> ", t->data);
        t = t->next;
    }
    printf("NULL\n");
}

int main() {
    int ch, x, p;
    while (1) {
        printf("\n1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at End\n");
        printf("6. Delete at Position\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &x);
                insertBeg(x);
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &x);
                insertEnd(x);
                break;
            case 3:
                printf("Enter data and position: ");
                scanf("%d %d", &x, &p);
                insertPos(x, p);
                break;
            case 4:
                delBeg();
                break;
            case 5:
                delEnd();
                break;
            case 6:
                printf("Enter position: ");
                scanf("%d", &p);
                delPos(p);
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}