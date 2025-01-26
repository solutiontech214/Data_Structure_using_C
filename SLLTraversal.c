//Create by Onkar Gutti on 26/1/2025
//This code is used to traverse a singly linked list in C language.
//The singly linked list is created using structures.
//The singly linked list is traversed using a function.
//The singly linked list is traversed using a while loop.
//The singly linked list is traversed using a temporary pointer.
//The singly linked list is traversed using a function call.
//The singly linked list is traversed using a function definition.
//The singly linked list is traversed using a function prototype.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL;

void traverse(struct node *head);
void main()
{
    //Creating a singly linked list

    struct node *n1=(struct node *)malloc(sizeof(struct node));
    struct node *n2=(struct node *)malloc(sizeof(struct node));
    struct node *n3=(struct node *)malloc(sizeof(struct node));
    struct node *n4=(struct node *)malloc(sizeof(struct node));
    struct node *n5=(struct node *)malloc(sizeof(struct node));
    //Assigning data and linking nodes
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
    //Last node points to NULL
    n5->next=NULL;
    traverse(head);
}
void traverse(struct node *head)
{
    //Traversing the singly linked list
    struct node *temp=head;
    //Traversing the singly linked list using a while loop
    while(temp!=NULL)
    {
        //Printing the data of the node
        printf("%d->",temp->data);
        //Moving to the next node
        temp=temp->next;
    }
    //Printing NULL at the end of the singly linked list
    printf("NULL");
    return;

}