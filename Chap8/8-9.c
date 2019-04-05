#include<stdio.h>
#include<stdlib.h>
 char string[150];
 int letter=0,number=0,space=0,others=0;
 int main()
{ 
  
  int count(char string[]); 
  printf("请输入一行字符串\n");
  gets(string);
  count(string);
  printf("此字符串中的个数：字母=%-3d数字=%-3d空格=%-3d其他=%-3d\n",letter,number,space,others);
  system("pause");
  return(0);   
}

 int count(char str[])
{
  int i,len;
  len=strlen(str);   
  for(i=0;i<=len-1;i++)
     {
       if(string[i]>='A'&&string[i]<='Z'||string[i]>='a'&&string[i]<='z')letter=letter+1;  
       else {
              if(string[i]>='0'&&string[i]<='9')number=number+1;
              else {
                     if(string[i]==' ')space=space+1;
                     else others=others+1;
                   }
            }
                 
     }
  return(0);
}
 
