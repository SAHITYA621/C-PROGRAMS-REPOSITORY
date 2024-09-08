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
struct Node* insertAtFirst(struct Node* head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    ptr->data = data;
    ptr->next = head;
    return ptr;
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

    printf("LINKED LIST BEFORE INSERTION:\n");
    LinkedListTraversal(head);

    head = insertAtFirst(head, 9);//here we insert the element at list 
    printf("LINKED LIST AFTER INSERTION:\n");
    LinkedListTraversal(head);

    return 0;
}

