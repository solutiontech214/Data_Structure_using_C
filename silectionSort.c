// Created by Onkar Gutti 26/1/2025

// The above code is for insertion sort. The code below is for selection sort. The code is similar to the above code. The only difference is the sorting algorithm used. The above code uses insertion sort and the below code uses selection sort. The code below is for selection sort. The code is similar to the above code. The only difference is the sorting algorithm used. The above code uses insertion sort and the below code uses selection sort. The code below is for selection sort. The code is similar to the above code. The only difference is the sorting algorithm used. The above code uses insertion sort and the below code uses selection sort. The code below is for selection sort. The code is similar to the above code. The only difference is the sorting algorithm used. The above code uses insertion sort and the below code uses selection sort. The code below is for selection sort. The code is similar to the above code. The only difference is the sorting algorithm used. The above code uses insertion sort and the below code uses selection sort.


#include<stdio.h>
#include<conio.h>
//selection sort
//selection sort is a simple sorting algorithm. This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part is empty and the unsorted part is the entire list.
//The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element becomes a part of the sorted array. This process continues moving unsorted array boundary by one element to the right.
//This algorithm is not suitable for large data sets as its average and worst case complexities are of Ο(n2), where n is the number of items.
//The selection sort algorithm works as follows:
//1. Find the minimum element in the array
//2. Swap the minimum element with the first element of the unsorted part
//3. Move the subarray boundary one element to the right
//4. Repeat the above steps until the entire array is sorted

void selectionSort(int arr[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
void main()
{
    int arr[]={5,3,8,6,2};
    printf("Array before sorting\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    selectionSort(arr,5);
    printf("\nArray after sorting\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();

}