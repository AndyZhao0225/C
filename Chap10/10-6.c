#include<stdio.h>
#include<stdlib.h>
 int main()
{
  char string[50];
  int measure(char *str);
  int l;
  char *pointer;
  printf("请输入一行字符串\n");
  gets(string);
  pointer=string;
  l=measure(pointer);
  printf("该字符串的长度为%d\n",l);
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

 
