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
  printf("���԰˽�����ʽ���뱻������\n");
  scanf("%o",&num);
  printf("ԭ���Ĳ�����ʽΪ\n");
  show(num);
  printf("����һλ��Ϊ\n");
  num=num>>1;
  show(num);
  system("pause");
  return;     
} 
