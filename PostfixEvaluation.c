#include<stdio.h>
int is_operator(char ch);
void push();
int pop();
int stack[10];
int top=-1;
void main()
{
    int operand1,operand2;
    char ch[10];
    printf("\n Enter Postfix Expression :");
    scanf("%s",&ch);
    int i=0;
    while(ch[i]!='\0')
    {
        if(ch[i]>='0' && ch[i]<='9')
        {
            int num=ch[i]-'0';
            push(num);
        }
        else if(is_operator(ch[i]))
        {
            switch(ch[i])
            {
                case '+':
                operand1=pop();
                operand2=pop();
                push(operand1+operand1);break;
                case '-':
                operand1=pop();
                operand2=pop();
                push(operand1-operand1);break;
                case '*':
                operand1=pop();
                operand2=pop();
                push(operand1*operand1);break;
                case '/':
                operand1=pop();
                operand2=pop();
                push(operand1/operand1);break;




            }
        }
    }
    printf("\n Final Result is : %d",stack[top]);
}
int is_operator(char ch)
{
    if(ch=='+'|| ch=='-' || ch=='*' || ch=='/')
{
    return 1;
}
else{
    return 0;
}
}
void push(int num)
{
    if(top==-1)
    {
        top+=1;
        stack[top]=num;
        return;
    }
    top=top+1;
    stack[top]=num;
   
    
}
int pop()
{
    int save=stack[top];
    top-=1;
    return save;
    
}