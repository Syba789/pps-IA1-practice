#include<stdio.h>
int add(int x,int y)
{
  int k=y+x;
  return k;
}
int main()
{
  int a,b;
  printf("enter two numbers to add\n");
  scanf("%d%d",&a,&b);
  printf("%d+%d=%d",a,b,(a+b));
  return 0;
}
