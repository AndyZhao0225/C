#include<stdio.h>
#include<stdlib.h>
 char* New(int n)
{
  return (char*)calloc(n,sizeof(char));              
}

 int main()
{
  int n; 
  printf("������Ҫ���ٵ��ַ����ռ��С\n");
  scanf("%d",&n);
  New(n);
  system("pause");
  return;     
}
