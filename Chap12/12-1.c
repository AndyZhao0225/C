#include<stdio.h>
#include<stdlib.h>
 unsigned short getbits(unsigned short value,int n1,int n2)
{
  unsigned short b,c,d;
  b=value>>(16-n2);
  c=~(~0<<(n2-n1+1));
  d=b&c;   
  return d;   
}

 int main()
{
  unsigned short num;
  int start,end; 
  printf("�����뱻������(�˽���)����ȡ������ʼλ�����λ\n");
  scanf("%o %d %d",&num,&start,&end);
  printf("����󣬽��Ϊ%d\n",getbits(num,start,end));
  system("pause");
  return;     
}
