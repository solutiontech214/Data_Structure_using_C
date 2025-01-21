#include<stdio.h>
#include<conio.h>
int main()
{
char name[30],address[40];
int age,phone_number;
printf("enter your name:");
scanf("%s",&name);
printf("enter your address:");
scanf("%s",&address);
printf("enter your age:");
scanf("%d",&age);
printf("enter your phone number:");
scanf("%d",&phone_number);
printf("your age is: %d \n",age);
printf("your phone number:%d \n",phone_number);
printf("your name is:%s \n",name);
printf("your address is:%s \n",address);
getch();
}
