#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int bubble_sort(char str[10]);
  char string[10];
  printf("�����뺬��10���ַ����ַ���\n");
  gets(string);
  printf("���ַ���С��������Ϊ\n");
  bubble_sort(string);
  system("pause");
  return(0);     
}

 int bubble_sort(char str[10])
{ 
  int i,j,n;
  char m;
  for(n=9;n>=0;n--)
     {
       for(i=0;i<=n-1;i++)
          {
            if(str[i]>str[i+1])
              {
                 m=str[i];
                 str[i]=str[i+1];
                 str[i+1]=m;                   
              }    
          }
     } 
  for(i=0;i<=9;i++)printf("%c",str[i]);
  printf("\n");   
  return(0);     
}
