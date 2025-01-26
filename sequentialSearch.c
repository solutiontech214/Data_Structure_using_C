// Created by Onkar Gutti on 26th Jan 2025

// Program to search an element in an array using sequential search
// Sequential search is a method to search an element in an array by traversing the array from the beginning to the end
// The program takes the number of elements and the elements as input and the element to search
// The program uses a flag variable to check if the element is found or not
// The program uses a for loop to traverse the array and check if the element is found or not
// The program prints the position of the element if found else prints element not found
// The program uses the concept of sequential search to search an element in an array
// The program uses the concept of flag variable to check if the element is found or not
// The program uses the concept of for loop to traverse the array and check if the element is found or not
// The program uses the concept of if else statement to check if the element is found or not
// The program uses the concept of printf function to print the output
// The program uses the concept of scanf function to take the input from the user
// The program uses the concept of getch function to hold the output screen


#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,key,flag=0;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search :");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=i;
            break;
        }
    }
    if(flag!=0)
    {
        printf("Element found at position %d",flag+1);
    }else{
        printf("Element not found");
    }
    getch();
}