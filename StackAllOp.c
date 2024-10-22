#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// i have created a array named as stack with size 10
// we can store only 10 elements in this stack
int stack[10];

// Simple method declaration name 'push'
void push();

//Simple method declaration name 'pop'
void pop();

//Simple method declaration name 'disp'
void disp();

//Simple method declaration name 'peek'
void peek();

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
    printf("--------------- Menu Operaion Menu ---------------");
    printf("\n1 Push \n2 Pop \n3 Disp \n4 Peek \n5 Exit");
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
        case 3:
        disp();
        break;
        case 4:
        peek();
        break;

        case 5:exit(0);break;

    
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

//Main Logic for displaying stack element..
void disp()
{
    //Checking if stack is empty or not 
    if(top==-1)
    {
        //printing appropriate msg
    printf("\n Stack is Empty ! First Push Element..");
    return;
    }
    int count=-1;
    //Logic for Displaying Stack element
do
{
    count+=1;
    printf("\t %d ",stack[count]);
    
}while(count!=top);

}

//Main Logic for peek Operation on stack that display the value of last inserted element 
void peek()
{
    //Checking if stack is empty or not 
    if(top==-1)
    {
        //printing appropriate msg
    printf("\n Stack is Empty ! First Push Element..");
    return;
    }
    printf("\n Top Element is : %d",stack[top]);//printing stack's top element 

}