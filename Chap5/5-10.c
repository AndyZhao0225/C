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
  printf("����������\n");
  scanf("%f %f",&x,&y);
  printf("�õ�߶�ֵΪ%d\n",measure(x,y));
  system("pause");
  return;     
} 
