#include<stdio.h>
#include<stdlib.h>
 int* insert(int x,int *p)
{
  int i,j,mark=0;
  for(i=0;i<=9;i++)
    {
      if(x<*(p+i))
        {
          for(j=9;j>=i;j--)*(p+j+1)=*(p+j);
          *(p+i)=x;          
          mark=1;        
          break;          
        }
    }    
  if(mark==0)*(p+10)=x;
  return p;       
}

 int main()
{
  int array[11]={1,3,5,7,9,11,13,15,17,19},x,i;
  int *pointer=array;
  printf("ԭ����Ϊ\n");
  for(i=0;i<=9;i++)printf("%d ",array[i]);             
  printf("\n������һ����\n");
  scanf("%d",&x);
  pointer=insert(x,pointer);
  printf("���������������,����Ϊ\n");
  for(i=0;i<=10;i++)printf("%d ",*(pointer+i));
  printf("\n");
  system("pause");
  return;     
}
