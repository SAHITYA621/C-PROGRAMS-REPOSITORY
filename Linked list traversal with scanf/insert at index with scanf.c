#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
node *next;
};
24
struct node *insertionAtIndex(struct node *head , int data , int
index)
{
struct node *ptr = (struct node *)malloc(sizeof(struct
node));
struct node *p = head;
int i = 0;
while(i!=index-1)
{
p=p->next;
i++;
}
ptr->data=data;
ptr->next=p->next;
p->next=ptr;
return head;
}
int main()
{
struct node *head = NULL;
struct node *current = NULL;
int numNodes;
printf("Enter no. of nodes\n");
scanf("%d",&numNodes);
int i;
for(i=0;i<numNodes;i++)
{
25
struct node *newNode = (struct node
*)malloc(sizeof(struct node));
printf("Enter data %d\t",i+1);
scanf("%d",&newNode->data);
newNode->next=NULL;
if(head == NULL)
{
head = newNode;
current = newNode;
}
else
{
current->next = newNode;
current = newNode;
}
}
printf("Linked List ");
struct node *temp = head;
while(temp!=NULL)
{
printf("%d ->", temp->data);
temp = temp->next;
}
printf("NULL\n");
head = insertionAtIndex(head , 10 , 2);
printf("Linked List After Insertion ");
temp=head;
26
while(temp!=NULL)
{
printf("%d ->",temp->data);
temp=temp->next;
}
printf("NULL\n");
while(head!=NULL)
{
temp=head;
head = head->next;
free(temp);
}
return 0;
}
