#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 float root(float origin)
{
  float x1,x0;
  if(origin==0)return 0;
  x1=origin/2;
  do 
    {
      x0=x1;
      x1=(x0+origin/x0)/2;
    }   
  while(fabs(x1-x0)>=0.00001);
  return x1;       
}

 int main()
{
  float a;
  printf("请输入a的值\n");
  scanf("%f",&a);
  if(a<0)printf("输入有误！\n");
  else printf("该数平方根为%f\n",root(a));
  system("pause");
  return;     
} 
