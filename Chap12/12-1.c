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
  printf("请输入被操作数(八进制)及欲取出的起始位与结束位\n");
  scanf("%o %d %d",&num,&start,&end);
  printf("处理后，结果为%d\n",getbits(num,start,end));
  system("pause");
  return;     
}
