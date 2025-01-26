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