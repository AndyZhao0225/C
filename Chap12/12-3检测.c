#include<stdio.h>
#include<stdlib.h>
 int show(short n)
{
  unsigned short mask=1;
  int record[16],i;
  for(i=0;i<=15;i++)
     {
       mask=1;
       mask=mask<<i;
       record[i]=(n&mask)>>i;               
     }
  for(i=15;i>=0;i--)printf("%d",record[i]);               
  printf("\n");
  return;     
}

 int main()
{
  short num;
  printf("请以八进制形式输入被操作数\n");
  scanf("%o",&num);
  printf("原数的补码形式为\n");
  show(num);
  printf("右移一位后为\n");
  num=num>>1;
  show(num);
  system("pause");
  return;     
} 
