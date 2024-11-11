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
void display();
void delete_Specf();
void main()
{
    int choice;
    char ch;
    do
    {
        printf("\n1. Insert Begining \n2. Delete Specf \n3. Display \n4.Exit");
        printf("\n Enter your Choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insertBeg(); break;

            case 2:delete_Specf();break;
            case 3:display();break;
            case 4:exit(0);break;
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
void delete_Specf()
{
    int key;
if(start==NULL)
{
    printf("SLL is empty.......");
    return;
}
printf("Enter the Key After You Want to Insert :");
scanf("%d",&key);
struct node *n=(struct node *)malloc(sizeof(struct node));
printf("Enter element to insert :");
scanf("%d",&n->val);
struct node *temp=start;
if(start->val==key)
{
    n->next=start->next;
    start->next=n;
    printf("%d is inserted successfully..",n->val);
    return;
}
do
{
    temp=temp->next;

}
while(key!=temp->val);
n->next=temp->next;
temp->next=n;
printf("%d is inserted...",n->val);
return;

}
void display()
{
if(start==NULL)
{
    printf("list is empty.....");
    return;

}
struct node *temp=start;
while(temp!=NULL)
{
    printf("%d \t",temp->val);
    temp=temp->next;
}
}