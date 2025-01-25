#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    int i=1,res=1;
    while(i<=b)
    {
        res=res*a;
        i++;
    }
    printf("Result is:%d",res);
     getch();
    return 0;
   

}