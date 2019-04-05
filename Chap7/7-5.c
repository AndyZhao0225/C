#include<stdio.h>
#include<stdlib.h>
#define MaxSize 100
 int* invert(int* p,int n)
{
  int b[n],i;  
  for(i=0;i<=n-1;i++)b[n-1-i]=*(p+i);
  for(i=0;i<=n-1;i++)*(p+i)=b[i];            
  return p;
}

 int main()
{
  int array[MaxSize],n,i,*pointer;
  printf("请输入数组元素个数\n");
  scanf("%d",&n);
  printf("请输入数组元素值\n");
  for(i=0;i<=n-1;i++)scanf("%d",&array[i]);
  pointer=invert(array,n);
  printf("将该数组逆序存放后为\n");
  for(i=0;i<=n-1;i++)printf("%d ",*(pointer+i));
  printf("\n");
  system("pause");
  return;     
} 
