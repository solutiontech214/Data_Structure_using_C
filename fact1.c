#include<stdio.h>
int fact()
{
    int num,fact=1;
    printf("Enter a number to find Factorial :");
    scanf("%d",&num);
    for(num;num>0;num--)
    {
        fact=fact*num;
    }
    return fact;
}
void main()
{
printf("Factorial of the number is : %d",fact());
}