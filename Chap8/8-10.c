#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int search(char string[]);
  char string[100];
  printf("请输入一行字符\n");
  gets(string);
  search(string); 
  system("pause");
  return(0);     
}

 int search(char form[])
{
  char longest_word[20],str[20];
  int i,j,l,m,n=0;
  l=strlen(form);
  j=0;
  for(i=0;i<=l-1;i++)
     {            
         if(form[i]!=' ')
           {
             str[j]=form[i];
             j=j+1;               
           }
         else 
           { 
             m=strlen(str);
             if(m>n)
               {
                 for(j=0;j<=m-1;j++)
                    {
                      longest_word[j]=str[j];               
                    }     
                 longest_word[m]='\0';
                 n=m;
               }                   
             for(j=0;j<=19;j++)str[j]='\0';              
               j=0;          
           }     
     }
  printf("此字符串中最长的单词是%s\n",longest_word);
  return(0);     
}
