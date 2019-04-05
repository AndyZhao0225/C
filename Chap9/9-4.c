#include<stdio.h>
#include<stdlib.h>
#define LEAP_YEAR(y) (y%4==0&&y%100!=0||y%100==0&&y%400==0) 
 int main()
{
  int year;
  printf("请输入年份\n");
  scanf("%d",&year);
  if(LEAP_YEAR(year))printf("%d是闰年\n",year);
  else printf("%d不是闰年\n",year);
  system("pause");
  return(0);     
}
