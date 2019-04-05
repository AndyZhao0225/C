#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 char string[80];
 int main()
 {
   int transform();
   int n;
   printf("请输入一个16进制的数\n");
   gets(string);
   n=transform(string);
   printf("其等值的十进制数为%d\n",n);
   system("pause");
   return(0);  
 } 

 int transform(char string[])
 {
   int s=0,len,i;
   len=strlen(string);
   for(i=0;i<=len-1;i++)
      {
         if(string[i]<=57&&string[i]>=48)s=s+(string[i]-48)*pow(16,len-1-i);
         else if(string[i]<=70&&string[i]>=65)s=s+(string[i]-55)*pow(16,len-1-i);          
              else 
                {
                  printf("输入有误！\n");
                  break;
                }     
      }
   return(s);
 }
