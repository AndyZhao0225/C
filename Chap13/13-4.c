#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
 char* transform(char* str)
{
  int i;
  for(i=0;*(str+i)!='\0';i++)if(*(str+i)>=97&&*(str+i)<=122)*(str+i)=*(str+i)-32;
  return str;          
}

 int main()
{ 
  FILE *fp;
  int i;
  char string[maxsize],*pointer;
  printf("请输入一行字符串\n");
  for(i=0;(string[i]=getchar())!='!';i++);
  string[++i]='\0';
  pointer=transform(string);
  if((fp=fopen("test.txt","w"))==NULL)
    {
      printf("不能打开文件\n");
      exit(0);                                  
    }
  while(*pointer!='\0')
    {
      fputc(*pointer,fp); 
      pointer++;   
    }  
  fclose(fp);
  system("pause");
  return;     
}
