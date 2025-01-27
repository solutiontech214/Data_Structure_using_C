#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
};
struct node *head=NULL;
int insertEnd(struct node *head,int data);
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

insertEnd(head,80);
traverse(head);
}
int insertEnd(struct node *head,int data)
{
struct node *n5=(struct node *)malloc(sizeof(struct node));
if(n5==NULL)
{
    return 0;
}
struct node *tmp=head;
while(tmp->next!=NULL)
{
tmp=tmp->next;
}
tmp->next=n5;
n5->data=data;
n5->prev=tmp;
n5->next=NULL;
printf("\nInserted at End");
return 1;
}
