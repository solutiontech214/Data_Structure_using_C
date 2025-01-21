#include<stdio.h>
int main()
{
int a=122,b=13,c=14;
if(a>b && a>c)
{
printf("%d is greater than %d and %d",a,b,c);
}
else if(b>a && b>c)
{
printf("%d is greater than %d and %d",b,a,c);
}
else
{
printf("%d is greater than %d and %d",c,a,b);
}
}