#include<stdio.h>
#include<stdlib.h>
 char str3[100];
 int main()
{ 
  int catenate(char string1[],char string2[]);
  char str1[50];
  char str2[50]; 
  printf("请输入两个字符串\n");
  gets(str1);
  gets(str2);
  printf("连接后的字符串为\n");
  catenate(str1,str2);
  printf("%s\n",str3);
  system("pause");
  return(0);   
}

 int catenate(char string1[],char string2[])
{
  int l1,l2,i,j;   
  l1=strlen(string1);
  l2=strlen(string2);
  for(i=0;i<=l1-1;i++)str3[i]=string1[i];
  j=l1;  
  for(i=0;i<=l2-1;i++)
     {
       str3[j]=string2[i];
       j++;                 
     }
  return(0);     
}
