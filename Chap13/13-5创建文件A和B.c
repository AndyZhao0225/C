#include<stdio.h> 
#include<stdlib.h>
#define maxsize 100
 int main()
{
  FILE* fp;
  char string[maxsize];
  printf("请输入一行字符串以写入文件A\n");
  gets(string);
  if((fp=fopen("A.txt","w+"))==NULL)
    {
      printf("不能打开文件\n");
      exit(0);                            
    }
  if(fputs(string,fp)!=0)printf("文件写入失败\n");;  
  fclose(fp);
  printf("请输入一行字符串以写入文件B\n");
  gets(string); 
  if((fp=fopen("B.txt","w+"))==NULL)
    {
      printf("不能打开文件\n");
      exit(0);                            
    }
  if(fputs(string,fp)!=0)printf("文件写入失败\n");;  
  fclose(fp);
  system("pause");
  return;     
}
