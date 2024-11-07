#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert();
void display();
struct node 
{
    int data;
    struct node *next;
};
struct node *start;
void main()
{
    int ch;
    char choice;
do{
    printf("\n 1 insert Element ");
    printf("\n 2 Reverse List");
    printf("\n 3 Display List");
    printf("\n Enter your Choice :");
    scanf("%d",&ch);
    switch(choice)
    {
        case 1: insert();break;
        case 2: display();break;
        default:
        printf("Invalid choice Please try again...!!!");

    }
    printf("Continue (Y/N) :");
    scanf("%s",&choice);
}while(choice=='y');

}
void insert()
{
struct node *n=(struct node *)malloc(sizeof(struct node));
if(n==NULL)
{
    printf("Memory Allocation Failed..!");
    return;
}
printf("Enter Value to Insert :");
scanf("%d",&n->data);
n->next=NULL;
if(start==NULL)
{
    start=n;
    printf("Insertion of %d Successfull...",n->data);
    return;
}
struct node *temp;
temp=start;
while(temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=n;
 printf("Insertion of %d Successfull...",temp->next->data);
return;
}

void display()
{
    if(start==NULL)
    {
        printf("\n List Is Empty..!!");
        return;
    }
    struct node *temp=start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
    }
}