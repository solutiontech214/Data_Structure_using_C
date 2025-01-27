//Created by Onkar Gutti on 26/1/2025
//This code is used to find the length of a singly linked list in C language.
//in this we are finding the length of the singly linked list using a function.
//in this we are finding the length of the singly linked list using a while loop.
//in this we are finding the length of the singly linked list using a temporary pointer.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
int length(struct node *head);
void main()
{
    struct node *n1=(struct node *)malloc(sizeof(struct node));
    struct node *n2=(struct node *)malloc(sizeof(struct node));
    struct node *n3=(struct node *)malloc(sizeof(struct node));
    struct node *n4=(struct node *)malloc(sizeof(struct node));
    struct node *n5=(struct node *)malloc(sizeof(struct node));
    head=n1;
    n1->data=10;
    n1->next=n2;
    n2->data=20;
    n2->next=n3;
    n3->data=30;
    n3->next=n4;
    n4->data=40;
    n4->next=n5;
    n5->data=50;
    n5->next=NULL;
    printf("\n Length of the singly linked list is: %d",length(head));
    getch();
}
int length(struct node *head)
{
    int count=0;
    struct node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}