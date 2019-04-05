#include<stdio.h>
#include<stdlib.h>
#include"E:\C程序项目文件夹\Passed\format.h"
 int main()
{
  int a;
  float b;
  char string[50];
  printf("请输入一个整数\n"); 
  scanf("%d",&a);
  INTEGER(a);
  NL;
  printf("请输入一个实数\n");
  scanf("%f",&b);
  FLOAT(b);
  NL;
  printf("请输入一行字符串\n");
  scanf("%s",string);
  STRING(string);
  NL;
  system("pause");
  return(0);     
}
