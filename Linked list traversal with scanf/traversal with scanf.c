#include <stdio.h>
#include <stdlib.h>
// Define the structure for the linked list node
struct Node {
 int data;
 struct Node* next;
};
int main() {
 struct Node* head = NULL;
 struct Node* current = NULL;
 int numNodes,i;
 printf("Enter the number of nodes: ");
 scanf("%d", &numNodes);
 for (i = 0; i < numNodes; i++) {
 // Dynamically allocate memory for a new node
 struct Node* newNode = (struct
Node*)malloc(sizeof(struct Node));
 // Read data for the node
 printf("Enter data for node %d: ", i + 1);
 scanf("%d", &newNode->data);
 // Set the next pointer to NULL
 newNode->next = NULL;
 // If it's the first node, set it as the head
 if (head == NULL) {
 head = newNode;
 current = newNode;
 } else {
 // Otherwise, connect it to the current node and update
 current->next = newNode;
 current = newNode;
 }
 }
 // Print the linked list
 printf("Linked List: ");
 struct Node* temp = head;
 while (temp != NULL) {
 printf("%d -> ", temp->data);
 temp = temp->next;
 }
 printf("NULL\n");
 // Free allocated memory
 while (head != NULL) {
 temp = head;
 head = head->next;
 free(temp);
 }
 return 0;
}
