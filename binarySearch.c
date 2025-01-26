// Created by Onkar Gutti on 26/1/2025.

// Program to search an element in an array using binary search
// Binary search is a method to search an element in an array by dividing the array into two halves and checking the middle element
// The program takes the number of elements and the elements as input and the element to search
// The program uses a while loop to check if the element is found or not
// The program uses the concept of binary search to search an element in an array
// The program uses the concept of while loop to check if the element is found or not
// The program uses the concept of if else statement to check if the element is found or not
// The program uses the concept of printf function to print the output
// The program uses the concept of scanf function to take the input from the user
// The program uses the concept of getch function to hold the output screen

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void main()
{
    int n,key,low,high,mid;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int list[n];
    printf("Enter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
    printf("Enter the element to search :");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(list[mid]==key)
        {
            printf("Element found at position %d",mid+1);
            break;
        }else if(list[mid]<key)
        {
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
}