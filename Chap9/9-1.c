#include<stdio.h>
#include<stdlib.h>
#define Exchange(a,b){t=b;b=a;a=t;}
 int main()
{
  int num1,num2,t;
  printf("请输入两个数\n");
  scanf("%d,%d",&num1,&num2);
  Exchange(num1,num2);
  printf("交换后为%d，%d",num1,num2);
  printf("\n");
  system("pause");
  return(0);   
}
