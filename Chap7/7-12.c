#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
 char* decode(char* str)
{
  int i;
  for(i=0;*(str+i)!='\0';i++)
    {
      if(*(str+i)>=65&&*(str+i)<=90)*(str+i)=155-*(str+i);                          
      if(*(str+i)>=97&&*(str+i)<=122)*(str+i)=219-*(str+i);                            
    }
  return str;   
}

 int main()
{
  char code[maxsize];  
  printf("�������������\n");
  gets(code);
  printf("����Ϊ%s\n",code);
  printf("ԭ��Ϊ%s\n",decode(code));
  system("pause");
  return;     
} 
