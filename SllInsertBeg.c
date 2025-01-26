//Created by Onkar Gutti on 26/1/2025
//This code is used to insert data at the beginning of a singly linked list in C language.
//The singly linked list is created using structures.
//The data is inserted at the beginning of the singly linked list using a function.
//The data is inserted at the beginning of the singly linked list using a while loop.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
int insertBeg(struct node **head,int data);
void traverse(struct node *head);
void main()
{
    int chno;
    char ch;
    //menu driven program
    do
    {
        printf("\n Enter the data to be inserted at the beginning of the singly linked list: ");
        scanf("%d",&chno);
        if(insertBeg(&head,chno))
        {
            printf("\n Data inserted successfully");
        }
        else
        {
            printf("\n Data insertion failed");
        }
        printf("\n The singly linked list is: ");
        traverse(head);
        printf("\n Do you want to insert more data at the beginning of the singly linked list? (y/n): ");
        scanf(" %c",&ch);
       
    } while (ch=='y'||ch=='Y'); 
    getch();
    
}
//Function to traverse the singly linked list
//This function takes the head of the singly linked list as a parameter
//This function traverses the singly linked list using a while loop
//This function prints the data of the singly linked list
//This function prints NULL at the end of the singly linked list

void traverse(struct node *head)
{
    if(head==NULL)
    {
        printf("\n The singly linked list is empty");
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

//Function to insert data at the beginning of the singly linked list
//This function takes the head of the singly linked list and the data to be inserted as parameters
//This function inserts the data at the beginning of the singly linked list
//This function returns 1 if the data is inserted successfully
//This function returns 0 if the data insertion fails

int insertBeg(struct node **head,int data)
{
    
    struct node *n=(struct node *) malloc(sizeof(struct node));
     if (n == NULL) {
        return 0; // Memory allocation failed
    }

    n->data = data;
    n->next = *head;
    *head = n;

    return 1; 
    
}