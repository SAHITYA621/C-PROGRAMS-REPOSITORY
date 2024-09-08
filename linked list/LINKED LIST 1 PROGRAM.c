#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc function

struct Node {
    int data;
    struct Node *next;
};
// Define LinkedListTraversal function to traverse and print the linked list
void LinkedListTraversal(struct Node *ptr) 
{
    while(ptr!=NULL)
    {
    	printf("element:%d\n",ptr->data);
    	ptr=ptr->next;
	}
}

// Define a function prototype for LinkedListTraversal
int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Correct the capitalization of 'Struct' to 'struct'
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 65;
    fourth->next = NULL;

    LinkedListTraversal(head); // Correct the function name to LinkedListTraversal

    return 0;
}


