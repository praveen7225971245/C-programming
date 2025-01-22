#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory not allocated\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


int main() {
    Node* head = createNode(10);

    head->next = createNode(20);
    head->next->next = createNode(30);

    printf("Data in the first node is %d\n", head->data);
    printf("Data in the second node is %d\n", head->next->data);
    printf("Data in the third node is %d\n", head->next->next->data);
    Node* temp = head;

    return 0;
}