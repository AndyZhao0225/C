#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int sort(int **p,int n);
  int n,i;
  int number[100];
  int *pointer[100];
  printf("请输入要输入的整数个数\n");
  scanf("%d",&n);
  printf("请依次输入每个数\n");
  for(i=0;i<=n-1;i++)
     {
       scanf("%d",&number[i]);
       pointer[i]=&number[i];
     }
  sort(pointer,n);
  printf("排序后的顺序为\n");
  for(i=0;i<=n-1;i++)printf("%-4d",number[i]);
  printf("\n");
  system("pause");
  return(0);     
}

 int sort(int **p,int n)
{
  int i,j,larger,record,temp;
  for(i=n-1;i>=1;i--)
     {
       larger=**(p+i);
       for(j=i-1;j>=0;j--)
          {
            if(**(p+j)>larger)
              {
                larger=**(p+j);
                record=j;               
              }              
          }                
       if(larger!=**(p+i))
         {
           temp=**(p+i);
           **(p+i)=**(p+record);
           **(p+record)=temp;
         }
     }
  return(0);     
}
