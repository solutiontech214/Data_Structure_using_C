#include<stdio.h>
#include<conio.h>
int main()
{
int age=0;
printf("enter your age:\n");

scanf("%d",&age);
if(18<=age)
{
printf("you are eligible for voting");
}
else
{
printf("you are not eligible for voting ");
}
getch();

}