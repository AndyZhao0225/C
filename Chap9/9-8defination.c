#include<stdio.h>
#include<stdlib.h>
#define Max(a,b,c) {if(a>=b&&a>=c)maximum=a;if(b>=a&&b>=c)maximum=b;if(c>=a&&c>=b)maximum=c;}
 int main()
{
  int num1,num2,num3,maximum;
  printf("请输入三个整数\n");
  scanf("%d,%d,%d",&num1,&num2,&num3);
  Max(num1,num2,num3);
  printf("这三个数中最大的数为%d\n",maximum);
  system("pause");
  return(0);       
}
