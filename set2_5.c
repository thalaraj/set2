#include<stdio.h>

int main()
{
  int a,b,i;
  printf("enter the two limits");
  scanf("%d%d",&a,&b);
  for(i=a;i<b;i++)
    {
    if((i+2)%2==0)
      {
      printf("%d\n",i);
      }
    }
}
