#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *prev;
    int data;
    struct node *next;

};
struct node *head=NULL;
int deleteSpecific(struct node **head,int pos);
void traverse(struct node *head);
void main()
{
struct node *n1=(struct node*)malloc(sizeof(struct node));
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
deleteSpecific(&head,2);
printf("\n Element after Deletion at Specific Position :");
traverse(head);
deleteSpecific(&head,1);
printf("\n Element after Deletion at Specific Position :");
traverse(head);
deleteSpecific(&head,1);
printf("\n Element after Deletion at Specific Position :");
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
int deleteSpecific(struct node **head,int pos)
{
if(*head==NULL)
{
printf("\n List is Empty..");
return 0;
}
int i=1;
if(pos==1)
{
*head=(*head)->next;
free((*head)->prev);
(*head)->prev=NULL;
(*head)->next->prev=*head;
return 1;
}
struct node *temp=*head;
while(temp->next!=NULL && i<pos)
{
temp=temp->next;
i++;
}
temp->next
}