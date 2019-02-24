#include<stdio.h>

int main()
{
int a,b=0,i,n;
scanf("%d",&a);
i=a;
n=i;
while(i!=0)
{
n=i%10;
b=(b*10)+n;
i=i/10;
}
if(b==a)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
