#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main()
{
  int sort(char *p[10]);    
  int i;
  char string[10][50];
  char *pointer[10];
  printf("请输入10个字符串\n");
  for(i=0;i<=9;i++)
     {
       gets(string[i]);
       pointer[i]=string[i];
     }
  printf("排序后为\n");
  sort(pointer);
  for(i=0;i<=9;i++)printf("%s\n",string[i]);
  system("pause");
  return(0);     
}

 int sort(char *p[10])
{
  int i,j,mark;
  char str[50],largest[50];
  for(i=9;i>=1;i--)
     {
        strcpy(largest,p[i]);
        mark=i;
        for(j=i-1;j>=0;j--)
           {
             if(strcmp(p[j],largest)>0)
               {
                 strcpy(largest,p[j]);
                 mark=j;
               }
           }
        if(mark==i);
        else 
          {
            strcpy(str,p[i]);
            strcpy(p[i],p[mark]);
            strcpy(p[mark],str);          
          }
     }
  return(0);     
}
