#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 char record[100];
 int j=0;
 void transform(int n)
{
  int i=n/10;
  if(i==0)record[j]=n%10+48;
  else 
    {
      record[j++]=n%10+48;
      transform(i);                        
    }  
}

 char* invert(char* p)
{
  int length=strlen(p),left=0,right;
  char temp;
  right=length-1;
  while(right>left)
    {
      temp=*(p+right);
      *(p+right)=*(p+left);
      *(p+left)=temp;
      right--;
      left++;     
    }
  return p;
}

 int main()
{
  int num; 
  printf("请输入一个整数\n");
  scanf("%d",&num);
  if(num<0)
    {
      putchar('-');
      num=-num;
    }
  transform(num);
  invert(record);
  puts(record);
  system("pause");
  return;     
}
