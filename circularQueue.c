#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int queue[size],front=-1,rear=-1;
void enqueue(int element);
int isFull();
int isEmpty();
int dequeue();
int peek();
void main()
{
    int chno=0,elm;
    char ch;
    do
    {printf("\n1.Enqueue\n2.Degueue\n3.Peek\n4.Exit\nEnter your choice :");
    scanf("%d",&chno);
    switch(chno)
    {
        case 1:
        printf("\nEnter Element to insert :");
        scanf("%d",&elm);
        enqueue(elm);
        printf("Element Enqueued : %d",elm);
        break;

        case 2:
        printf("Element Dequeued :%d",dequeue());
        break;

        case 3:
        printf("Element at front :%d",peek());
        break;

        case 4:exit(0);
        break;

    }
    printf("\n Want to continue (y/n) :");
    scanf("%s",&ch);
    } while (ch=='y');
    getch();
}

void enqueue(int value)
{
    if(isFull() )
    {
        printf("\n Queue is full..");
        return;
    }
    if(isEmpty())
    {
        front=rear=0;
        queue[rear]=value;
    }else{
        rear=(rear+1)%size;
        queue[rear]=value;
    }
}
int dequeue()
{
    int value;
    if(isEmpty())
    {
        printf("\nQueue is Empty...");
        return -1;
    }
    if(front>rear)
    {
        front=rear=-1;
        return -1;
    }
    else{
         value=queue[front];
        front=(front+1)%size;
        
    }
    return value;

}

int isFull()
{
    return (front==-1 && rear==size-1) || (rear+1==front);

}
int isEmpty()
{
    return front==-1;
}
int peek()
{
    if(isEmpty())
    {
        return -1;
    }
    return queue[front];
}