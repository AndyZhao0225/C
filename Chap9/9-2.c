#include<stdio.h>
#include<stdlib.h>
#define Rest(a,b) rest=a%b
 int main()
{ 
  int num1,num2,rest;
  printf("��������������\n");
  scanf("%d,%d",&num1,&num2);
  Rest(num1,num2);
  printf("�ڶ���������һ����������Ϊ%d\n",rest);
  system("pause");
  return(0);     
}
