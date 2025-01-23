#include<stdio.h>
float amount=0.0;
void main()
{
float money;
char name[40];
char bankname[40];
char IFSC[11];
int account_number;
printf("enter your name:");
scanf("%s",&name);
printf("enter your bank name:");
scanf("%s",&bankname);
printf("enter your account number:");
scanf("%d",&account_number);
printf("enter IFSC code:");
scanf("%s",&IFSC);
printf("enter amount to credit:");

scanf("%f",&money);
credit(money);
printf("\n Checking Balance....\n");
printf("Available Balance is : %d \n",checkBalance());
printf("Enter amount to Debit :");
scanf("%f",&money);
debit(money);
printf("Available Balance is : %d \n",checkBalance());

}
void credit(float money)
{
amount=amount+money;
}
int checkBalance()
{
return amount;
}
void debit(float money)
{
amount=amount-money;
}