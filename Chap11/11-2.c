#include<stdio.h>
#include<stdlib.h>
 struct
{
  int year;
  int month;
  int day;  
}date;
 
 int days(int y,int m,int d)
{
  int answer;
  switch(m)
         {
           case 1:answer=d;break;
           case 2:answer=31+d;break;
           case 3:answer=59+d;break;
           case 4:answer=90+d;break;
           case 5:answer=120+d;break;
           case 6:answer=151+d;break;
           case 7:answer=181+d;break;
           case 8:answer=212+d;break;
           case 9:answer=243+d;break;
           case 10:answer=273+d;break;
           case 11:answer=304+d;break;
           case 12:answer=334+d;      
         }                             
  if((y%4==0&&y%100!=0)||y%400==0)if(m>=3)answer++;
  return answer;     
}

 int main()
{
  printf("请输入日期\n");
  scanf("%d %d %d",&date.year,&date.month,&date.day); 
  printf("该日是该年的第%d天\n",days(date.year,date.month,date.day));
  system("pause");
  return 0;     
} 
