#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
 int main()
{
  int sort(char (*p)[50],int l);
  int i,j,length; 
  char string[10][50];
  char (*pointer)[50];
  printf("请输入字符串长度\n");
  scanf("%d",&length);
  printf("请输入10个等长的字符串\n");
  for(i=0;i<=9;i++)scanf("%s",&string[i]);
  pointer=string;
  sort(pointer,length);
  printf("排序后顺序为\n");
  for(i=0;i<=9;i++)
     { 
       for(j=0;j<=9;j++)
          {
            if(string[j][length]==i+48)
              {
                string[j][length]='\0';
                printf("%s\n",string[i]);
              }
          }              
     }
  system("pause");
  return(0);     
} 

 int sort(char (*p)[50],int l)
{
  int i=0,j,k;
  char temp[50];
  char (*origin)[50];
  origin=p;
  for(;i<=8;i++,p++)
  {
    for(j=i+1;j<=9;j++)
     {   
       if(strcmp(*p,*(origin+j))>0)   
       {
        for(k=0;k<=l;k++)
          {   
            temp[k]=*(*p+k);             /* 交换两指针所指的字符串*/ 
            *(*p+k)=*(*(origin+j)+k);               
            *(*(origin+j)+k)=temp[k];
          }
        }          
     }
 }            
  p=origin;
  for(i=0;i<=9;i++)
     {
       *(*(p+i)+l)=i+48;
       *(*(p+i)+l+1)='\0';              
     }
  return(0);     
}
