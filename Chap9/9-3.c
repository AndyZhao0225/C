#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define S(a,b,c) s=(double)(a+b+c)/2
#define Area(s,a,b,c) area=sqrt(s*(s-a)*(s-b)*(s-c))
 int main()
{ 
  int num1,num2,num3;
  double area,s;
  printf("���������������߳�\n");
  scanf("%d,%d,%d",&num1,&num2,&num3);
  if(num1+num2<=num3||num2+num3<=num1||num1+num3<=num2)printf("����Ĳ���������\n");
  else
    {
      S(num1,num2,num3);
      Area(s,num1,num2,num3);
      printf("�����������Ϊ%f\n",area);
    }
  system("pause");
  return(0);     
}
