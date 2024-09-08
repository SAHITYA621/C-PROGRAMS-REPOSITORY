#include<stdio.h>

struct Node{
	int data;
	struct Node*next;
};

void Linkedlisttraversal(struct node*ptr){
	
	while(ptr!=NULL)
	{
		printf("ELEMENT:%d\n",ptr->data);
		ptr=ptr->next;
	}
	struct node *insertatend(struct node *head, int data)
{
struct node *ptr = (struct node *) malloc(sizeof (struct node));
ptr->data=data;
struct node* p=head;
while(p->next!=NULL)
{
p=p->next;

}

p->next=ptr;
ptr->next=NULL;
return head;

	
}
int main(){
	
	struct node*head;
	struct node*second;
	struct node*third;
	struct node*fourth;
	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	
	head->data=11;
	head->next=second;
	
	second->data=14;
	second->next=third;
	
	third->data=21;
	third->next=fourth;
	
	fourth->data=30;
	fourth->next=NULL;
	
	printf("LINKED LIST BEFORE INSERTION\n");
	Linkedlisttraversal(head);
	
	
	printf("LINKED LIST AFTER INSERTION\n");
	head=insertatend(head,30);
	
	return 0;
	
	
	
}
