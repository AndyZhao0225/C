#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int measure(float x,float y)
{
  if((pow(fabs(x)-2,2)+pow(fabs(y)-2,2))<=1)return 10;   
  return 0;
}

 int main()
{
  float x,y;
  printf("请输入坐标\n");
  scanf("%f %f",&x,&y);
  printf("该点高度值为%d\n",measure(x,y));
  system("pause");
  return;     
} 
