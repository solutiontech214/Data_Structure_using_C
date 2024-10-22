#include<stdio.h>
#include<conio.h>
//Declared integer array with size 10
int array[10];

//main  method starts
void main()
{
    printf("\nEnter 10 array Element :");
    //getting array elements
    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);

    }
    int key;

    //getting key element to search
    printf("Enter Key Element to Search Within Array :");
    scanf("%d",&key);
//checking if element is present or not
    printf("\nChecking Element is present or not ...");
    for(int i=0;i<10;i++)
    {
        if(array[i]==key)
        {
            printf("\n%d is present at index %d..",key,i);
            key=0;
        }

    }
    //if element is not there in array then it will pring appropriate msg
    if(key==0)
    {

    }else{
        printf("\n Element not found..");
    }
    getch();

}