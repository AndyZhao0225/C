#include<stdio.h>
#include<stdlib.h>
 char Space[1000];
 char *p;
 int n;
 char *alloc(int n)
{
  if(n<=1000)
    {
      p=p+n;
      return(p-n);
    }
  else return NULL;
}

 void free(void *p)
{
  p=p-n;     
}

 int main()
{
  p=Space;
  printf("������Ҫ���ٿռ���ֽ���\n");
  scanf("%d",&n);
  p=alloc(n);
  if(p!=NULL)free(p);
  system("pause");
  return(0);     
}
  
 

 
