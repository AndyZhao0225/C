#include<stdio.h>
#include<stdlib.h>
#include"E:\C������Ŀ�ļ���\Passed\format.h"
 int main()
{
  int a;
  float b;
  char string[50];
  printf("������һ������\n"); 
  scanf("%d",&a);
  INTEGER(a);
  NL;
  printf("������һ��ʵ��\n");
  scanf("%f",&b);
  FLOAT(b);
  NL;
  printf("������һ���ַ���\n");
  scanf("%s",string);
  STRING(string);
  NL;
  system("pause");
  return(0);     
}
