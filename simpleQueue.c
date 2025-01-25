#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//Created the queue array of size 10 and front and rear variables to keep track of the front and rear element
int queue[10],front=-1,rear=-1;
void enqueue(int value);
int dequeue();
int isEmpty();
int isFull();
int peek();
void main()
{
    //Variable declaration
    int chno=0,ele;
    char ch;
    //Do while loop to keep the menu running unit user wants to exit
    do{
        //Menu
        printf("\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Exit\nEnter your choice: ");
        scanf("%d",&chno);
        //Switch case to perform the operations based on the user choice
        switch(chno)
        {
            case 1:
            printf("\n Enter element to enqueue :");
            scanf("%d",&ele);
            enqueue(ele);
            printf("\nElement enqueued: %d",ele);
                    break;
            case 2: printf("\nElement dequeued: %d",dequeue());
                    break;
            case 3: printf("\nElement at front: %d",peek());
                    break;
            case 4: break;
            default: exit(0);
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c",&ch);
    }while(ch=='y');
    getch();
}
//Function to enqueue the element into the queue
void enqueue(int value)
{
    //Check if queue is full
    //If full print queue is full
if(isFull()){
    printf("\nQueue is full");
}
//Else increment the rear and enqueue the element into the queue
else if(front==-1 && rear==-1){
    front=rear=0;
   
    queue[rear]=value;
}
else{
    rear++;
    queue[rear]=value;}
}
//Function to dequeue the element from the queue
int dequeue()
{
    //Check if queue is empty
    //If empty print queue is empty
    if(isEmpty())
    {
        printf("\nQueue is empty");
        return -1;
    }
    //Else increment the front and return the element dequeued
    else
    {
        return queue[front++];
    }
}
//Function to check if the queue is empty
int isEmpty()
{
    if(front==-1 || front>rear)
    {
       front=rear=-1;
        return 1;
    }
    else
    {
        return 0;
    }
}
//Function to check if the queue is full
int isFull()
{
    if(rear==9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//Function to return the element at the front of the queue
int peek()
{
    if(isEmpty())
    {
        printf("\nQueue is empty");
        return -1;
    }
    else{
return queue[front];
    }
    
}
