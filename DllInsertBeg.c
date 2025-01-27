#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
};
struct node *head=NULL;
int insertBeg(struct node **head,int data);
void traverse(struct node *head)
{
    struct node *temp=head;
    if(temp==NULL)
    {
        printf("\nList is Empty");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
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
traverse(head);
printf("\n");
insertBeg(&head,90);
traverse(head);
}
int insertBeg(struct node **head,int data)
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(*head==NULL)
    {
        n->next=NULL;
    n->prev=NULL;
    n->data=data;
    *head=n;
    return 1;
    }
n->next=*head;
n->prev=NULL;
n->data=data;
(*head)->prev=n;
*head=n;
   return 1; 
}