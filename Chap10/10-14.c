#include<stdio.h>
#include<stdlib.h>
 int main()
{ 
  int invert(int *p,int n);
  int number,i,*pointer;
  int array[50];    
  printf("请输入要输入的数的个数\n");
  scanf("%d",&number);
  printf("请输入数据\n");
  for(i=1;i<=number;i++)scanf("%d",&array[i-1]);
  pointer=array;  
  invert(pointer,number);
  printf("原数据按逆序排列后为\n");
  for(i=0;i<=number-1;i++)printf("%3d",array[i]);
  printf("\n"); 
  system("pause");
  return(0);     
}

 int invert(int *p,int n)
{
  int temp,i;
  for(i=0;i<n-i-1;i++)
     {
       temp=*(p+i);
       *(p+i)=*(p+n-i-1);
       *(p+n-i-1)=temp;                 
     }
  return(0);     
}
