#include<stdio.h>
#include<stdlib.h>
 char* New(int n)
{
  return (char*)calloc(n,sizeof(char));              
}

 void* Free(char *p)
{
  free(p);     
}

 int main()
{
  int n;
  char *add; 
  printf("请输入要开辟的字符串空间大小\n");
  scanf("%d",&n);
  add=New(n);
  Free(add);
  system("pause");
  return;     
}
