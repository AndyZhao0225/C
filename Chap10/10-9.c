#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int transform(int *p);
  int array[3][3];
  int i,j,*pointer;
  printf("������һ��3X3�ľ���\n");
  for(i=0;i<=2;i++)scanf("%d %d %d",&array[i][0],&array[i][1],&array[i][2]);
  printf("ת��ǰ������Ϊ��\n");
  for(i=0;i<=2;i++)
     {
       for(j=0;j<=2;j++)printf("%3d",array[i][j]);
       printf("\n");              
     } 
  pointer=array[0];
  transform(pointer);
  printf("ת�ú󣬾���Ϊ��\n");
  for(i=0;i<=2;i++)
     {
       for(j=0;j<=2;j++)printf("%3d",array[i][j]);
       printf("\n");              
     }
  system("pause");
  return(0);     
} 

 int transform(int *p)
{ 
  int temp;
  temp=*(p+3);
  *(p+3)=*(p+1);
  *(p+1)=temp;
  temp=*(p+6);
  *(p+6)=*(p+2);
  *(p+2)=temp;
  temp=*(p+7);
  *(p+7)=*(p+5);
  *(p+5)=temp;   
  return(0);     
} 
