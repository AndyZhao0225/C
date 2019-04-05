#include<stdio.h>
#include<stdlib.h>
#define Rest(a,b) rest=a%b
 int main()
{ 
  int num1,num2,rest;
  printf("请输入两个整数\n");
  scanf("%d,%d",&num1,&num2);
  Rest(num1,num2);
  printf("第二个数除第一个数的余数为%d\n",rest);
  system("pause");
  return(0);     
}
