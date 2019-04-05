#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char string[50][30],test[50][30];
 
 int main()
{
  int i,j,row; 
  FILE* fp;
  printf("请输入若干行字符串,最后一行以end结束\n");
  for(i=0;i<=49;i++)                                   //将字符串存在string数组内 
     {
       gets(string[i]);
       if(strcmp(string[i],"end")==0)
         {
           row=i;
           break;
         }              
     }
  if((fp=fopen("store.txt","w"))==NULL)
    {
      printf("不能打开文件\n");
      exit(0);                            
    }
  for(i=0;i<=row-1;i++)
     {
      for(j=0;j<=29;j++)
         {
           fputc(string[i][j],fp);
           if(string[i][j]=='\0')
             {
               fputc('\n',fp);
               break;
             }
         }
     }
  fclose(fp);    
  if((fp=fopen("store.txt","r"))==NULL)
    {
      printf("不能打开文件\n");
      exit(0);                            
    }
  for(i=0;feof(fp)==0;i++)
     {
       for(j=0;j<=29;j++)
          {
            if((test[i][j]=fgetc(fp))=='\n')break;
            if(test[i][j]>=97&&test[i][j]<=122)test[i][j]=toupper(test[i][j]);
          } 
     } 
  row=i;
  fclose(fp);
  for(i=0;i<row-1;i++)puts(test[i]);
  system("pause");
  return;     
}
