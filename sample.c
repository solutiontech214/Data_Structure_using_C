#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void insertEnd(int value);
void traverse();

struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
void main()
{
while(1)
{
int choice;
printf("Enter your choice :");
scanf("%d",&choice);
char ch;
switch(choice)
{
case 1:
int value;
printf("Enter value to inser :");
scanf("%d",&value);
insertEnd(value);
break;
case 2:
traverse();
break;

}
printf("What to continue :");
scanf("%c",&ch);
if(ch=='n' || ch=='N')
{
break;
}
getch();
}
void insertEnd(int value)
{
struct node *n=(struct node *)malloc(sizeof(struct node));
n->data=value;
n->next=NULL;
if(head==NULL)
{
head=n;
}
else
{
n->next=head;
head=n;
}
printf("data is inserted :%d",n->data);
}

void traverse()
{
if(head==NULL)
{
printf("List is empty");
return;
}
else
{
struct node *temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
