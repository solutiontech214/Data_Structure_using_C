#include<stdio.h>
#include<conio.h>
// i have created a array named as stack with size 10
// we can store only 10 elements in this stack
int stack[10];

// Simple method declaration name 'push'
void push();

//Simple method declaration name 'pop'
void pop();


//here i am taking a simple integer variable and assigned -1 value to it 
//Where there is no elements in an array then the top variable contains value -1 this condition is also called as Stack underflow condition
// When stack is in underflow condition then we can't delete any element from stack : Beacuse stack is empty.
int top=-1;

//this integer variable indicates the size of maximum stack
int max=10;
void main()
{
    int choice;
    char ch;
do{
    printf("\n1 Push \n2 Pop");
    printf("\n Enter your Choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        push();
        break;
        case 2:
        pop();
        break;

    
    default:
    printf("\n Invalid choice ! Please try again...");
        
    }
    printf("\n Do you Wnat to continue (y/n)? :");
    scanf("%s",&ch);
}while(ch!='n');

}

//Main Logic for Pushing Element on Stack..
void push()
{
    //check condition for stack is full or not .
    if(top==max-1)
    {
        printf("\n Can't Push ! Stack is OverFlow / Full. \n First Pop an Element the try to Push");
        return;
        
    }
    top+=1;
    int val;
    printf("\n Enter value to push :");
    scanf("%d",&val);
    stack[top]=val;
    printf(" \n%d is inserted successfully..",stack[top]);
    return;
}

//Main Logic For POPPING or  Deleting an element from stack..
void pop()
{
    //check condition for stack is empty or not .
if(top==-1)
{
    printf("\n Stack Underflow !!\n First Insert An Element then Try again to POP ");
    return;
}
printf("%d is Popped from Stack..",stack[top]);
top-=1;
return;

}