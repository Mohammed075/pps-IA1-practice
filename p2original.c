#include <stdio.h>
int input()
{
  int a;
  printf("enter value\n");
  scanf("%d",&a);
  return a;
}
int cmp (int a,int b,int c)
{
  if((a>b)&&(b>c))
  return a;
  else if((b>a)&&(b>c))
  return b;
  else
  return c;
}
int output(int big)
{
  printf("biggest number is %d\n",big);
}
int main()
{
  int x,y,z,big;
  x=input();x=10;
  y=input();y=20;
  z=input();z=30;
  big=cmp(x,y,z);;
  output(big);
}