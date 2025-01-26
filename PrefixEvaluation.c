#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    //this program evaluates the prefix expression
    char ch[10];
    int stack[10];
    int a,b;
    char operator;
    int top=-1;
    printf("Enter the prefix expression :");
    scanf("%s",ch);
   //finding the length of ch
    int size=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        size++;
    }
    //reversing the string
    
    for(int i=size;i>=0;i--)
    {
        if(ch[i]>='0' && ch[i]<='9')
        {
            stack[++top]=ch[i]-'0';
        }else{
            a=stack[top--];
            b=stack[top--];
            operator=ch[i];
            switch(operator)
            {
                case '+':stack[++top]=a+b;
                break;
                case '-':stack[++top]=a-b;
                break;
                case '*':stack[++top]=a*b;
                break;
                case '/':stack[++top]=a/b;
                break;
            }
        }
    }
    printf("Prefix expression is : %d",stack[top]);
   
    getch();

}