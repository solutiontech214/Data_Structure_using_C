#include<stdio.h>
#include<stdlib.h>
struct node 
{
int data;
struct node *next;
struct node *prev;
};
struct node *head=NULL;
int deleteEnd(struct node *head);
void traverse(struct node *head);
void main()
{
struct  node *n1=(struct node*)malloc(sizeof(struct node));
    struct node *n2=(struct node*)malloc(sizeof(struct node));
    struct node *n3=(struct node*)malloc(sizeof(struct node));
    struct node *n4=(struct node*)malloc(sizeof(struct node));
    n1->data=10;
    n1->next=n2;
    n1->prev=NULL;
    n2->data=20;
    n2->next=n3;
    n2->prev=n1;
    n3->data=30;
    n3->next=n4;
    n3->prev=n2;
    n4->data=40;
    n4->next=NULL;
    n4->prev=n3;
	head=n1;
	
	printf("\n Elements are :");
	traverse(head);
	deleteEnd(head);
	printf("\n Element after Deletion at End :");
	traverse(head);

}
void traverse(struct node *head)
{
if(head==NULL)
{
printf(" List Empty");
return;
}
struct node *temp=head;
while(temp!=NULL)
{
printf("%d -> ",temp->data);
temp=temp->next;

}
printf("NULL");
}
int deleteEnd(struct node *head)
{
if(head==NULL)
{
printf("List is Empty.");
return 0;
}
struct node *temp=head;
while(temp->next->next!=NULL)
{
temp=temp->next;
}
free(temp->next);
temp->next=NULL;
return 1;

}