// Created by Onkar Gutti  on 25/01/2025.

//Necessary header files
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//Created the stack array of size 10 and top variable to keep track of the top element
int stack[10],top=-1;

//Function prototypes
void push(int value);
int pop();
int isEmpty();
int isFull();
int peek();

//Main function
void main()
{
    //Variable declaration
    int chno=0,ele;
    char ch;
    //Do while loop to keep the menu running unit user wants to exit
    do{
        //Menu
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Exit\nEnter your choice: ");
        scanf("%d",&chno);
        //Switch case to perform the operations based on the user choice
        switch(chno)
        {
            case 1:
            printf("\n Enter element to push :");
            scanf("%d",&ele);
            push(ele);
            printf("\nElement pushed: %d",ele);
                    break;
            case 2: printf("\nElement popped: %d",pop());
                    break;
            case 3: printf("\nElement at top: %d",peek());
                    break;
            case 4: break;
            default: exit(0);
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c",&ch);
    }while(ch=='y');
    getch();
}

//Function to push the element into the stack
void push(int value)
{
    //Check if stack is full
    //If full print stack is full
if(isFull()){
    printf("\nStack is full");
}
//Else increment the top and push the element into the stack
else{
    top++;
    stack[top]=value;
}
}

//Function to pop the element from the stack
//Return the element popped
int pop()
{
    //Check if stack is empty
    //If empty print stack is empty
    if(isEmpty())
    {
        printf("\nStack is empty");
        return -1;
    }
    //Else decrement the top and return the element popped
    else
    {
        return stack[top--];
    }
   
}

//Function to check if the stack is empty
//Return 1 if empty else return 0
int isEmpty()
{
    //Check if top is -1
    //If -1 return 1
    if(top==-1)
    {
        return 1;
    }
    //Else return 0
    else
    {
        return 0;
    }
    
}

//Function to check if the stack is full
//Return 1 if full else return 0
int isFull()
{
    //Check if top is 9
    //If 9 return 1
    if(top==9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//Function to return the element at the top of the stack
//Return the element at the top
int peek()
{
    //Check if stack is empty
    //If empty print stack is empty
    if(isEmpty())
    {
        printf("\nStack is empty");
        return -1;
    }
    else
    {
        return stack[top];
    }
}
