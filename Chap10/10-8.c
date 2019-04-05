#include<stdio.h>
#include<stdlib.h>
 int main()
{ 
  int count(char *p);
  char string[80];
  printf("请输入一行字符串\n");
  gets(string);
  count(string);
  system("pause");
  return(0);     
}

 int count(char *p)
{ 
  int upercase=0,lowercase=0,space=0,digit=0,others=0,mark=0;
  while(*p!='\0')
      {
        if('A'<=*p&&*p<='Z')
          {
            upercase++;
            mark=1;
          }
        if(97<=*p&&*p<=122)
          {
            lowercase++;
            mark=1; 
          }
        if(*p==32)
          {
            space++;
            mark=1;
          }
        if(48<=*p&&*p<=57)
          {
            digit++;
            mark=1;
          }
        if(mark==0)others++;
        mark=0;
        p++;  
      }
  printf("大写字母个数为%d\n",upercase);
  printf("小写字母个数为%d\n",lowercase);
  printf("空格个数为%d\n",space);
  printf("数字个数为%d\n",digit);
  printf("其他字符个数为%d\n",others);
  return(0);     
}
