#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 char* attach(char* str1,char* str2)
{
  int l1=strlen(str1),l2=strlen(str2),i;
  for(i=l1;i<=l1+l2-1;i++)
     {
        *(str1+i)=*(str2+i-l1);                  
     }
  *(str1+i)='\0';     
  return str1;
}

 int main()
{
  char string1[100],string2[50];
  printf("�������һ���ַ���\n");
  gets(string1);
  printf("������ڶ����ַ���\n");
  gets(string2);
  printf("���ڶ����ַ������ӵ���һ���ַ�����ĩβ��Ϊ\n%s\n",attach(string1,string2));
  system("pause");
  return;     
} 
