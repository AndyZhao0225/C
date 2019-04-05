#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main()
{
  int i;
  char *pointer[5];
  char string[5][50];
  printf("请输入5个字符串\n");
  for(i=0;i<=4;i++)
     {
       pointer[i]=string[i];
       gets(pointer[i]);              
     }
  sort(pointer);
  printf("排序后为\n");
  for(i=0;i<=4;i++)puts(*(pointer+i));
  system("pause");
  return(0);     
}

 int sort(char **p)
{
  int i,j,memory;
  char *temp;
  for(i=4;i>=1;i--)
     {
       memory=i;
       for(j=i-1;j>=0;j--)if(strcmp(*(p+j),*(p+memory))>0)memory=j;                              
       if(i!=memory)
         {
           temp=*(p+memory);
            p[memory]=*(p+i);
            p[i]=temp;       
         }             
     }
  return(0);     
}
