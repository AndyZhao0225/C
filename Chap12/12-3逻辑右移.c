#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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

 int logical_move(short value,int n)
{
  if(value>=0)value=value>>n;
  else
    {
      int i;
      short mask=0;
      value=value>>n;
      for(i=0;i<=(15-n);i++)mask=mask+(short)pow(2,i);
      value=value&mask;
    }
  show(value);
  return;
}

 int main()
{
  short num;
  int n;
  printf("请输入被操作数及右移的位数\n");
  scanf("%d %d",&num,&n);
  printf("原数的补码形式为\n");
  show(num);
  printf("逻辑右移后，变为\n");
  logical_move(num,n);
  system("pause");
  return;     
} 
