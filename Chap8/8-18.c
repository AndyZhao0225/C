#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int leap(int);
  int count1(int,int);
  int count2(int,int);  
  int year,month,day,k,answer;
  printf("请输入年月日\n");
  scanf("%d,%d,%d",&year,&month,&day);
  k=leap(year);
  if(k==0)answer=count1(month,day);
  else answer=count2(month,day);
  printf("此日期是该年的第%d天\n",answer);
  system("pause");
  return(0);     
} 

 int leap(int form)
{
  int judge;
  if((form%4==0&&form%100!=0)||(form%100==0&&form%400==0))judge=1;
  else judge=0;  
  return(judge);     
}

 int count1(int a,int b)
{
  int number=0;
  switch(a)
  {
    case 1:number=b;break;
    case 2:number=31+b;break;
    case 3:number=31+28+b;break;
    case 4:number=31+28+31+b;break;
    case 5:number=31+28+31+30+b;break;
    case 6:number=31+28+31+30+31+b;break;   
    case 7:number=31+28+31+30+31+30+b;break;
    case 8:number=31+28+31+30+31+30+31+b;break;    
    case 9:number=31+28+31+30+31+30+31+31+b;break;
    case 10:number=31+28+31+30+31+30+31+31+30+b;break; 
    case 11:number=31+28+31+30+31+30+31+31+30+31+b;break;
    case 12:number=31+28+31+30+31+30+31+31+30+31+30+b;break;
    default:;                  
  }
  return(number);     
}
 
 int count2(int a,int b)
{
  int number=0;
   switch(a)
  {
    case 1:number=b;break;
    case 2:number=31+b;break;
    case 3:number=31+29+b;break;
    case 4:number=31+29+31+b;break;
    case 5:number=31+29+31+30+b;break;
    case 6:number=31+29+31+30+31+b;break;   
    case 7:number=31+29+31+30+31+30+b;break;
    case 8:number=31+29+31+30+31+30+31+b;break;    
    case 9:number=31+29+31+30+31+30+31+31+b;break;
    case 10:number=31+29+31+30+31+30+31+31+30+b;break;
    case 11:number=31+29+31+30+31+30+31+31+30+31+b;break;
    case 12:number=31+29+31+30+31+30+31+31+30+31+30+b;break;
    default:;                  
  }
  return(number);     
}
