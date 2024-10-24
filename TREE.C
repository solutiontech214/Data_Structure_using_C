#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct tree
{
struct tree *left;
int val;
struct tree *right;
};
struct tree *root;
void insert();
void search();

int main()
{
 int choice;
 char ch;
 
 do{
 printf("\n1 Insert \n2 Search.");
 printf("\n Enter Your Choice :");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 insert();
 break;

 case 2:
 search();
 break;

 default:
 printf("\n Invalid choice.!!!");

 }
 printf("\n Do u Want to Continue (Y/N) :");
 scanf("%s",&ch);

 }while(ch!='n');
	 
}
void insert()
{
 struct tree *n=(struct tree*)malloc(sizeof(struct tree));
 struct tree *temp=root;
 if(n==NULL)
 {
  printf("\n Memory allocation Failed..!");
  return;

 }
 printf("Enter Value of Node :");
 scanf("%d",&n->val);
 if(root==NULL)
 {

 n->right=NULL;
 n->left=NULL;
 printf("%d inserted as root node ",n->val);
 root=n;
 return;
 }

   while(1)
   {
    if((temp->val)>(n->val) && temp->left==NULL)
    {

	 temp->left=n;
       n->right=NULL;
       n->left=NULL;
	      temp=n;
       printf("%d is inserted as left sub node.",temp->val);
	  break;



    }
    if(temp->left!=NULL)
      {
      temp=temp->left;

      }
    if((root->val)<(n->val) && temp->right==NULL)
    {

       temp->right=n;
       n->right=NULL;
       n->left=NULL;
       temp=n;

       printf("%d is inderted as right sub node.",temp->val);
       break;



    }
     if(temp->right!=NULL)
       {
	temp=temp->right;
       }
   }

 }

 void search()
 {
 int num;
  if(root==NULL)
  {
   printf("\n Tree is empty..");
   return;
  }
  else
  {
  struct tree *temp=root;
  printf("Enter value to search :");
  scanf("%d",&num);
   while(temp->right!=NULL && temp->left!=NULL)
   {
	 if(temp->val==num)
	 {
	  printf("Element found..");
	    num=-1;
	  break;
	 }
	 if(temp->val<num)
	 {
	  temp=temp->right;
	 }
	 if(temp->val>num)
	 {
	  temp=temp->left;
	 }

   }
  }
     if(num!=-1)
     {
      printf("\n Element not found..!!!");
     }
 }