#include<stdio.h> 
#include<stdlib.h>
#define maxsize 100
 int main()
{
  FILE* fp;
  char string[maxsize];
  printf("������һ���ַ�����д���ļ�A\n");
  gets(string);
  if((fp=fopen("A.txt","w+"))==NULL)
    {
      printf("���ܴ��ļ�\n");
      exit(0);                            
    }
  if(fputs(string,fp)!=0)printf("�ļ�д��ʧ��\n");;  
  fclose(fp);
  printf("������һ���ַ�����д���ļ�B\n");
  gets(string); 
  if((fp=fopen("B.txt","w+"))==NULL)
    {
      printf("���ܴ��ļ�\n");
      exit(0);                            
    }
  if(fputs(string,fp)!=0)printf("�ļ�д��ʧ��\n");;  
  fclose(fp);
  system("pause");
  return;     
}
