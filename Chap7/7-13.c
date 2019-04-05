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
  printf("请输入第一行字符串\n");
  gets(string1);
  printf("请输入第二行字符串\n");
  gets(string2);
  printf("将第二行字符串连接到第一行字符串的末尾，为\n%s\n",attach(string1,string2));
  system("pause");
  return;     
} 
