#include<stdio.h>
#include<stdlib.h>
 char* New(int n)
{
  return (char*)calloc(n,sizeof(char));              
}

 int main()
{
  int n; 
  printf("请输入要开辟的字符串空间大小\n");
  scanf("%d",&n);
  New(n);
  system("pause");
  return;     
}
