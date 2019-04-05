#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 unsigned short function(unsigned short value)
{
  int record[8],i,j=0;
  unsigned short mask=2,temp,answer=0;
  for(i=1;i<=15;i=i+2)
     {
       mask=2;
       mask=mask<<(i-1);
       temp=value&mask;
       temp=temp>>(i);
       record[j++]=temp;
     }        
  for(i=7;i>=0;i--)answer=answer+(unsigned short)(record[i]*pow(2,i));
  return answer;        
}

 int main()
{
  unsigned short num;
  printf("请以八进制形式输入被操作数\n");
  scanf("%o",&num);
  printf("处理后，数据（八进制）为%o\n",function(num));
  system("pause");
  return;     
} 
