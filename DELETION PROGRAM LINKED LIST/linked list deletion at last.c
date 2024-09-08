#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node *next;
};
void linkedlistTraversal(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("Element : %d\n",ptr->data);  
		ptr=ptr->next;
	}
}
struct node *deleteAtLast(struct node *head)
{
	struct node *p=head;
	struct node *q=head->next;
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
	return head;
}
int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	fourth = (struct node *)malloc(sizeof(struct node));
	
	head->data =  1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = fourth;
	
	
	fourth->data = 4;
	fourth->next = NULL;
	
	printf("Linked List Before Deletion\n");
	linkedlistTraversal(head);
	head = deleteAtLast(head);
	printf("Linked List After Deletion\n");
	linkedlistTraversal(head);
	return 0;
}
