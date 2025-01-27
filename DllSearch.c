#include<stdio.h>
#include<stdlib.h>
int pos=0;
struct node
{
int data;
struct node *next;
struct node *prev;
};
struct node *head=NULL;
int search(struct node *head,int key);

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
if(search(head,300))
{
printf("\nElement Found At Position : %d",pos);
pos=0;
}
else
{
printf("\nElement not Found");
}
}
int search(struct node *head,int key)
{
    int count=1;
if(head==NULL)
{
printf("\nList is Empty.!");
return 0;
}
struct node *temp=head;
while( temp!=NULL)
{
if(temp->data==key)
{
    pos=count;
return 1;
}
else
{
    temp=temp->next;
    count+=1;
}
}
if(pos!=0)
{
return 1;
}
else
{
return 0;
}
}