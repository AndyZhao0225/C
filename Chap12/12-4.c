#include<stdio.h>
#include<stdlib.h>
 unsigned short move(unsigned short value,int n)
{
  unsigned short b,c;
  if(n>0)
    {
      b=value<<(16-n);
      c=value>>n;
      return c|b;
    }
  if(n<0)
    {
      n=-n;
      b=value>>(16-n);
      c=value<<n;
      return c|b;    
    }    
  return value;          
}

 int main()
{
  unsigned short num;
  int digit;
  printf("�����뱻���������˽��ƣ�����λ�Ƶ�λ��\n");
  scanf("%o %d",&num,&digit);
  printf("�����󣬽�����˽��ƣ�Ϊ%o\n",move(num,digit));
  system("pause");
  return;   
} 
