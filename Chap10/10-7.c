#include<stdio.h>
#include<stdlib.h>
 int main()
{ 
  int copy(char *p,int digit);
  char string[50];
  int m;
  char *pointer; 
  printf("������һ���ַ���\n");
  gets(string);
  printf("������ӵڼ�λ��ʼ����\n");
  scanf("%d",&m);
  pointer=string;
  copy(pointer,m);
  printf("����֮����ַ���Ϊ\n");
  puts(string);
  system("pause");
  return(0);     
} 

 int copy(char *p,int digit)
{
  int d=digit-1;
  while(*(p+d)!='\0')
     {
       *p=*(p+d); 
       p++;
     }
  *p='\0';
  return(0);     
} 

 
