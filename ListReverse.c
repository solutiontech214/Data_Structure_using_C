//Hello this is onkar and today im going to show how to reverse A singly Linked List
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert();
void display();
void rev();
struct node 
{
    int data;
    struct node *next;
};
struct node *start;

//Main method/Driver code starts
void main()
{
    int ch;
    char choice;
    //display of Menu for User
do{
    printf("\n 1 insert Element ");
    printf("\n 2 Reverse List");
    printf("\n 3 Display List");
    printf("\n Enter your Choice :");
    scanf("%d",&ch);
    switch(ch)
    {
        //Calling Function according to user choice
        case 1: insert();break;
        case 3: display();break;
        case 2: rev();break;
        default:
        printf("Invalid choice Please try again...!!!");

    }
    printf("\n\n Continue (Y/N) :");
    scanf("%s",&choice);
}while(choice=='y');

}

//Logic for Inserting element in SLL
void insert()
{

    //Allocating memory for new node 'n'
struct node *n=(struct node *)malloc(sizeof(struct node));
if(n==NULL)
{
    printf("\n Memory Allocation Failed..!");
    return;
}
//Taking value from user to inasert into node
printf("\n Enter Value to Insert :");
scanf("%d",&n->data);
n->next=NULL;

if(start==NULL)
{
    start=n;
    printf("\n Insertion of %d Successfull...",n->data);
    return;
}
//creating a temperory pointer 
struct node *temp;
//assigning start to temp pointer
temp=start;
//logic for inserting an element at end of linked list
while(temp->next!=NULL)
{
    temp=temp->next;
    //assigning next address to temp pointer
}
temp->next=n;
 printf("\n Insertion of %d Successfull...",n->data);
return;
}

//logic for displaying elements 
void display()
{
    if(start==NULL)
    {
        printf("\n List Is Empty..!!");
        return;
    }
    struct node *temp=start;
    // Displaying elements until temp will not get NULL
    while(temp!=NULL)
    {
        printf("\n %d",temp->data);
        temp=temp->next;
        //Assigning next address to temp pointer
    }
}

//Logic for reversing the SLL
void rev() {
    struct node* prev = NULL;
    struct node* current = start;
    struct node* next = NULL;
    
    // In above i have created Three Pointers prev,curr,next
    while (current != NULL) {
        // Store the next node
        next = current->next;
        
        // Reverse the current node's pointer
        current->next = prev;
        
        // Move pointers one position astart
        prev = current;
        current = next;
    }
    
    // Update the start pointer
    start = prev;
    printf("\n List is Reversed ");
}
