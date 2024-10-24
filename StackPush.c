#include<stdio.h>
#include<conio.h>
// i have created a array named as stack with size 10
// we can store only 10 elements in this stack
int stack[10];

// Simple method declaration name 'push'
void push();

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
    printf("\n 1 push");
    printf("\n Enter your Choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        push();
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
/*A Stack is a linear data structure that follows a particular order in which the operations are performed. 
The order may be LIFO(Last In First Out) or FILO(First In Last Out).
 LIFO implies that the element that is inserted last, comes out first and FILO implies that the element that is inserted first, comes out last.*/

 //Key Operations on Stack Data Structures
//Push: Adds an element to the top of the stack.
//Pop: Removes the top element from the stack.
//Peek: Returns the top element without removing it.
//IsEmpty: Checks if the stack is empty.
//IsFull: Checks if the stack is full (in case of fixed-size arrays).

/*Applications of Stack Data Structures
Recursion
Expression Evaluation and Parsing
Depth-First Search (DFS)
Undo/Redo Operations
Browser History
Function Calls  */