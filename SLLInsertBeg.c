#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
    int val;
    struct node *next;
};
struct node *start=NULL;
void insertBeg();
void main()
{
    int choice;
    char ch;
    do
    {
        printf("\n1. Insert Begining \n2. Exit");
        printf("\n Enter your Choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insertBeg(); break;

            case 2:exit(0);break;
        }
        printf("\n Do You Want to Continue (y/n) :");
        scanf("%s",&ch);
    } while (ch!='n');
    
}

void insertBeg()
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL)
    {
     printf("\n Unable to Allocate Memory !! Please try again Leter..");
     return;   
    }
    printf("Enter Value to Insert :");
    scanf("%d",&n->val);
    if(start==NULL)
    {
        start=n;
        n->next=NULL;
        printf("\n %d is Inserted at Begining of SLL.",n->val);
       
    }
    else{  n->next=start->next;
    start=n;
     printf("\n %d is Inserted at Begining of SLL.",n->val);}
  


}