#include<stdio.h>
#include<stdlib.h>
 char Character[11]={'\0'};
 int main()
{
  int transform(long int number);
  long int num;
  printf("请输入一个整数\n");
  scanf("%ld",&num);
  transform(num);
  printf("字符串形式为%s\n",Character);
  system("pause");
  return(0);
}

 int transform(long int number)
{
  int i,m,l,rest;
  char mid[11]={'\0'};
  i=0;
  m=1;
  while(m!=0)
    {
      m=number/10;
      rest=number%10;
      switch(rest)
         {
           case 0:mid[i]='0';break;
           case 1:mid[i]='1';break;
           case 2:mid[i]='2';break;
           case 3:mid[i]='3';break;
           case 4:mid[i]='4';break;
           case 5:mid[i]='5';break;
           case 6:mid[i]='6';break;
           case 7:mid[i]='7';break;
           case 8:mid[i]='8';break;
           case 9:mid[i]='9';break;
           default:;  
         }
      number=m;
      i++;
    }
  l=strlen(mid);
  for(i=0;i<=l-1;i++)Character[i]=mid[l-1-i]; 
  return(0);      
}
