#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
node *next;
};

int main()
{
struct node *head = NULL;
struct node *current = NULL;
int numNodes;
printf("Enter no. of Nodes\n");
scanf("%d",&numNodes);
int i;

for(i=0;i<numNodes;i++)
{
struct node *newNode = (struct node
*)malloc(sizeof(struct node));
printf("Enter data %d: ", i+1);
scanf("%d", &newNode->data);
newNode->next=NULL;

if(head == NULL)
{
head = newNode;
current = newNode;
}

else
{
current->next=newNode;
current = newNode;
}
}

if(head!=NULL)
{
current->next=head;
}
printf("Circular Linked List\n");
struct node *temp = head;
do
{
printf("%d ->", temp->data);
temp=temp->next;
}

while(temp!=head);
printf("head\n");
struct node *tempNext;
do

{
tempNext=head->next;
free(head);
head = tempNext;
}
while(head!=NULL);
return 0;}
