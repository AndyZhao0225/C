#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int max(int num1,int num2,int num3);
  int a,b,c,maximum;
  printf("��������������\n");
  scanf("%d,%d,%d",&a,&b,&c);
  maximum=max(a,b,c);
  printf("��������������Ϊ%d\n",maximum);
  system("pause");
  return(0);     
}

 int max(int num1,int num2,int num3)
{
  int answer;
  if(num1>num2&&num1>num3)answer=num1;
  else {
         if(num2>num3)answer=num2;
         else answer=num3;
       }
  return(answer);     
}
