// Created by Onkar Gutti
// Date: 26 Jan 2022

// Program to convert infix expression to postfix expression
// Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
// Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
// The program uses stack data structure to convert infix expression to postfix expression.
// The program takes infix expression as input and converts it to postfix expression.
// The program uses switch case to check the operator and perform the operation on the operands.
// The program uses stack to store the operands and perform the operation on the operands.
// The program uses the concept of postfix expression to evaluate the expression.
// The program uses the concept of stack to store the operands and perform the operation on the operands.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    char ch[10];
    int stack[10];
    int a,b;
    char operator;
    int top=-1;
    printf("Enter the infix expression :");
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++)
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
                case '+':stack[++top]=b+a;
                break;
                case '-':stack[++top]=b-a;
                break;
                case '*':stack[++top]=b*a;
                break;
                case '/':stack[++top]=b/a;
                break;
            }
        }
    }
    printf("Postfix expression is : %d",stack[top]);
    getch();
}