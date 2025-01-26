// Created by Onkar Gutti on 26/1/2025

//insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.
//Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
//Algorithm
//To sort an array of size n in ascending order:
//1: Iterate from arr[1] to arr[n] over the array.
//2: Compare the current element (key) to its predecessor.
//3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
//The above code is for insertion sort. The code below is for selection sort. The code is similar to the above code. The only difference is the sorting algorithm used. The above code uses insertion sort and the below code uses selection sort. The code below is for selection sort. The code is similar to the above code. The only difference is the sorting algorithm used. The above code uses insertion sort and the below code uses selection sort. The code below is for selection sort. The code is similar to the above code. The only difference is the sorting algorithm used. The above code uses insertion sort and the below code uses selection sort. The code below is for selection sort. The code is similar to the above code. The only difference is the sorting algorithm used. The above code uses insertion sort and the below code uses selection sort.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insertionOSrt(int arr[],int n)
{
int i,j,key;
for(i=1;i<n;i++)
{
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j=j-1;

    }
    arr[j+1]=key;
}
}
void main()
{
    int arr[]={12,11,13,5,6};
    printf("Array before sorting :");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    insertionOSrt(arr,5);
    printf("Array after sorting :");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
}