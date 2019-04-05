#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 int main()
{ 
  char string[100],record[100];
  int number=0,mark=0,i,j,k=0;
  int a[100];
  printf("请输入一行字符串\n");
  gets(string);
  char *p;
  p=string;
  for(i=0;i<=strlen(string)-1;i++)
     {
       if(*(p+i)>='0'&&*(p+i)<='9'&&mark==0)
         {
           number++;
           mark=1;
           j=0;
           while(*(p+i)>='0'&&*(p+i)<='9')   /*record数组的作用是记录数字*/ 
                {
                   record[j++]=*(p+i);
                   i++;                          
                }
           record[j]='\0';
           a[k++]=atof(record);
         }        
       mark=0;             
     }
  printf("这行字符串共有%d个整数\n",number);
  for(j=0;j<=number-1;j++)printf("%d  ",a[j]);
  printf("\n");
  system("pause");
  return(0);     
}

 
