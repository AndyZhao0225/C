#include<stdio.h>
#include<stdlib.h>
#define LEAP_YEAR(y) (y%4==0&&y%100!=0||y%100==0&&y%400==0) 
 int main()
{
  int year;
  printf("���������\n");
  scanf("%d",&year);
  if(LEAP_YEAR(year))printf("%d������\n",year);
  else printf("%d��������\n",year);
  system("pause");
  return(0);     
}
