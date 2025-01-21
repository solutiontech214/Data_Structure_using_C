#include<stdio.h>
void main()
{
int num;
printf("enter a number:");
scanf("%is",&num);
int fact=1;
while(num>=1)
{
fact=fact*num;
num--;
}
printf("factorial is :%d",fact);
}
