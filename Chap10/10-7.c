#include<stdio.h>
#include<stdlib.h>
 int main()
{ 
  int copy(char *p,int digit);
  char string[50];
  int m;
  char *pointer; 
  printf("请输入一行字符串\n");
  gets(string);
  printf("请输入从第几位开始复制\n");
  scanf("%d",&m);
  pointer=string;
  copy(pointer,m);
  printf("复制之后的字符串为\n");
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

 
