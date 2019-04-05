#include<stdio.h>
#include<stdlib.h>
 int findmax(int a,int b,int c)
{
  if(a>=b&&b>=c)return a;
  if(b>=a&&b>=c)return b;
  if(c>=a&&c>=b)return c;
}

 int main()
{
  int a,b,c;
  printf("请输入3个整数\n");
  scanf("%d %d %d",&a,&b,&c);
  printf("这3个数中最大的数为%d\n",findmax(a,b,c));
  system("pause");
  return;     
} 
