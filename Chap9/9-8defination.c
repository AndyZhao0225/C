#include<stdio.h>
#include<stdlib.h>
#define Max(a,b,c) {if(a>=b&&a>=c)maximum=a;if(b>=a&&b>=c)maximum=b;if(c>=a&&c>=b)maximum=c;}
 int main()
{
  int num1,num2,num3,maximum;
  printf("��������������\n");
  scanf("%d,%d,%d",&num1,&num2,&num3);
  Max(num1,num2,num3);
  printf("����������������Ϊ%d\n",maximum);
  system("pause");
  return(0);       
}
