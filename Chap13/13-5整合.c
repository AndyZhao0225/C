#include<stdio.h>       //需先使所在文件夹包含A.txt和B.txt文件 方可运行 
#include<stdlib.h>
#include<string.h>
#define MaxSize 100
 char str1[2*MaxSize],str2[MaxSize]; 
 char* self_sort(char* string)
{
  int i,j,length=strlen(string);
  char temp;
  for(i=length-1;i>=1;i--)
     {
       for(j=0;j<=i-1;j++)
          {
            if(*(string+j)>*(string+j+1))
              {
                 temp=*(string+j);
                 *(string+j)=*(string+j+1);
                 *(string+j+1)=temp;                         
              }              
          }
     }
  return string;     
}
 
 char* insert(char* p1,char* p2)
{
  int i,j,k,length2=strlen(p2),length1=strlen(p1),mark;
  char a;
  for(i=0;i<=length2-1;i++)
     {
       a=*(p2+i);
       mark=0;
       for(j=0;j<=length1-1;j++)
          {
            if(a<*(p1+j))
              {
                for(k=length1-1;k>=j;k--)*(p1+k+1)=*(p1+k);
                *(p1+j)=a;
                mark=1;
                break;         
              }        
          } 
       if(mark==0)*(p1+length1)=a;
       length1++;                  
     }
  return p1;
}

 int main()
{
  FILE* fp;
  char *ptr; 
  int i; 
  if((fp=fopen("A.txt","r"))==NULL)
    {
      printf("不能打开文件A\n");
      exit(0);                               
    }
  fgets(str1,MaxSize,fp);                                   
  fclose(fp);
  if((fp=fopen("B.txt","r"))==NULL)
    {
       printf("不能打开文件B\n");
       exit(0);                               
    }
  fgets(str2,MaxSize,fp); 
  fclose(fp); 
  ptr=insert(self_sort(str1),str2);
  if((fp=fopen("C.txt","w+"))==NULL)
    {
       printf("不能打开文件C\n");
       exit(0);          
    }
  fputs(ptr,fp); 
  fclose(fp);
  system("pause");
  return;     
}
