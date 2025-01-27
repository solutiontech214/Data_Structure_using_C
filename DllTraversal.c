#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *prev;
struct node *next;
};
struct node *head=NULL;
void traverse(struct node *head);
void main()
{
struct node *n=(struct node *) malloc(sizeof(struct node));
struct node *n2=(struct node *)malloc(sizeof(struct node));
struct node *n3=(struct node *)malloc(sizeof(struct node));
struct node *n4=(struct node *)malloc(sizeof(struct node));
head=n;
n->data=10;
n->prev=NULL;
n->next=n2;
n2->data=20;
n2->prev=n;
n2->next=n3;
n3->data=30;
n3->prev=n2;
n3->next=n4;
n4->data=40;
n4->prev=n3;
n4->next=NULL;
printf("The List Elements are :\t");
traverse(head);
}
void traverse(struct node *head)
{
if(head==NULL)
{
printf("\n List is Empty.");
return;
}
struct node *temp=head;
while(temp!=NULL)
{
printf(" %d->",temp->data);
temp=temp->next;
}
printf("NULL");
}