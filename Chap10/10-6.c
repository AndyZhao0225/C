#include<stdio.h>
#include<stdlib.h>
 int main()
{
  char string[50];
  int measure(char *str);
  int l;
  char *pointer;
  printf("������һ���ַ���\n");
  gets(string);
  pointer=string;
  l=measure(pointer);
  printf("���ַ����ĳ���Ϊ%d\n",l);
  system("pause");
  return(0);     
}
  
 int measure(char *str)
{
  int i,length=0;
  while(*str!='\0')
    {
      length++;
      str++;          
    }
  return(length);     
}

 
