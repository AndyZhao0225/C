#include<stdio.h>
#include<stdlib.h>
 struct
{
  int year;
  int month;
  int day;        
}date;

 int main()
{ 
  int answer;
  printf("请输入日期\n");
  scanf("%d %d %d",&date.year,&date.month,&date.day);
  switch(date.month)
         {
           case 1:answer=date.day;break;
           case 2:answer=31+date.day;break;
           case 3:answer=59+date.day;break;
           case 4:answer=90+date.day;break;
           case 5:answer=120+date.day;break;
           case 6:answer=151+date.day;break;
           case 7:answer=181+date.day;break;
           case 8:answer=212+date.day;break;
           case 9:answer=243+date.day;break;
           case 10:answer=273+date.day;break;
           case 11:answer=304+date.day;break;
           case 12:answer=334+date.day;      
         }                             
  if((date.year%4==0&&date.year%100!=0)||date.year%400==0)if(date.month>=3)answer++;
  printf("该日是该年的第%d天\n",answer);
  system("pause");
  return 0;     
} 
