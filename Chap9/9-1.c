#include<stdio.h>
#include<stdlib.h>
#define Exchange(a,b){t=b;b=a;a=t;}
 int main()
{
  int num1,num2,t;
  printf("������������\n");
  scanf("%d,%d",&num1,&num2);
  Exchange(num1,num2);
  printf("������Ϊ%d��%d",num1,num2);
  printf("\n");
  system("pause");
  return(0);   
}
