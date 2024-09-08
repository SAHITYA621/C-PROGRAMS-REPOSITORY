#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void LinkedListTraversal(struct Node* ptr) {
    while (ptr != NULL) {
        printf("ELEMENT: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* deleteAtFirst(struct Node* head) {
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 11;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 18;
    third->next = fourth;

    fourth->data = 37;
    fourth->next = NULL;

    printf("LINKED LIST BEFORE DELETION:\n");
    LinkedListTraversal(head);

    head = deleteAtFirst(head);
    printf("LINKED LIST AFTER DELETION:\n");
    LinkedListTraversal(head);

    return 0;
}

