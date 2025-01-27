//Created by Onkar Gutti On 27/1/2025

// Program to delete the first node of a singly linked list
// Time Complexity: O(1)
// Space Complexity: O(1)
// Input: 10->20->30->40->50->NULL
// Output: 20->30->40->50->NULL

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
int deleteBeg(struct node *head);
void traverse(struct node *head);
void main()
{
    struct node *n1=(struct node*)malloc(sizeof(struct node));
    struct node *n2=(struct node*)malloc(sizeof(struct node));
    struct node *n3=(struct node*)malloc(sizeof(struct node));
    struct node *n4=(struct node*)malloc(sizeof(struct node));
    struct node *n5=(struct node*)malloc(sizeof(struct node));
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
    printf("Initial Linked List: \t");
    traverse(head);
    deleteBeg(head);

}
int deleteBeg(struct node *head)
{
    if(head==NULL)
    {
        printf(" List is empty\n");
        return 0;
    }
   struct node *temp=head->next;
    free(head);
    head=temp;
    printf("\n Linked List after deleting the first node: \t");
    traverse(head);
    return 1;
}
void traverse(struct node *head)
{
    if(head==NULL)
    {
        printf(" List is empty\n");
        return;
    }
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}