//Created by Onkar Gutti on 26/1/2025
//This code is used to search for an element in a singly linked list in C language.
//The singly linked list is created using structures.
//The singly linked list is searched using a function.
//The singly linked list is searched using a while loop.
//The singly linked list is searched using a temporary pointer.
//The singly linked list is searched using a function call.
//The singly linked list is searched using a function definition.
//The singly linked list is searched using a function prototype.
//The singly linked list is searched using a key.
//The singly linked list is searched using a position.
//The singly linked list is searched using a return statement.
//The singly linked list is searched using a return value.
//The singly linked list is searched using a return type.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//
int pos=0;
struct node
{
    int data;
    struct node *node;
};
struct node *head=NULL;
int search(struct node *head,int key);

void main()
{
    struct node *n1=(struct node *)malloc(sizeof(struct node));
    struct node *n2=(struct node *)malloc(sizeof(struct node));
    struct node *n3=(struct node *)malloc(sizeof(struct node));
    struct node *n4=(struct node *)malloc(sizeof(struct node));
    struct node *n5=(struct node *)malloc(sizeof(struct node));
    head=n1;
    n1->data=10;
    n1->node=n2;
    n2->data=20;
    n2->node=n3;
    n3->data=30;
    n3->node=n4;
    n4->data=40;
    n4->node=n5;
    n5->data=50;
    n5->node=NULL;
    if(search(head,300))
    {
        printf("\n Element found at position: %d",pos);
    }
    else
    {
        printf("\n Element not found");
    }
}
int search(struct node *head,int key)
{
    int count=1;
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            pos=count;
            return 1;
        }
        else{
            temp=temp->node;
            count++;
        }
    }
}