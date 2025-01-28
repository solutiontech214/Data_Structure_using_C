#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
int insertSpecific(struct node **head,int pos,int data)
{
struct node *n=(struct node *)malloc(sizeof(struct node ));

if(pos==1)
{
    n->data=data;
n->next=(*head);
n->prev=NULL;
if(*head!=NULL)
{
    (*head)->prev=n;
}
*head=n;
return 1;
}
struct node *temp=*head;
int i=1;
while(temp!=NULL && i<pos-1)
{
    temp=temp->next;
    i++;
}
n->data=data;
n->next=temp->next;
temp->next->prev=n;
temp->next=n;
n->prev=temp;
return 1;
}
void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
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
    display(head);
    printf("\n");
    insertSpecific(&head,3,25);
    display(head);
}
