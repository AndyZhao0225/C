#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int function(int *p);
  int num[5][5];
  int i,j;
  int *pointer;
  printf("请输入一个5*5的矩阵\n");
  scanf("%d %d %d %d %d\n",&num[0][0],&num[0][1],&num[0][2],&num[0][3],&num[0][4]);
  scanf("%d %d %d %d %d\n",&num[1][0],&num[1][1],&num[1][2],&num[1][3],&num[1][4]);
  scanf("%d %d %d %d %d\n",&num[2][0],&num[2][1],&num[2][2],&num[2][3],&num[2][4]);
  scanf("%d %d %d %d %d\n",&num[3][0],&num[3][1],&num[3][2],&num[3][3],&num[3][4]);
  scanf("%d %d %d %d %d",&num[4][0],&num[4][1],&num[4][2],&num[4][3],&num[4][4]);
  pointer=&num[0][0];
  function(pointer);
  printf("处理后矩阵为\n");
  for(i=0;i<=4;i++)
     {
       for(j=0;j<=4;j++)printf("%4d",num[i][j]);
       printf("\n");
     } 
  system("pause");
  return(0);     
}

 int function(int *p)
{
  int i,j,mark=0,temp;
  for(i=0;i<=23;i++)
     {
       mark=0;
       for(j=i+1;j<=24;j++)
          {
            if(*(p+i)<*(p+j))
              {
                mark=1;
                break;
              }         
          }
       if(mark==0)break;     
     }
  temp=*(p+i);
  *(p+i)=*(p+12);
  *(p+12)=temp;
  for(i=0;i<=23;i++)
     {
       mark=0;
       for(j=i+1;j<=24;j++)
          {
            if(*(p+i)>*(p+j))
              {
                mark=1;
                break;
              }         
          }
       if(mark==0)break;     
     }
  temp=*(p+i);
  *(p+i)=*p;
  *p=temp;
  for(i=1;i<=23;i++)
     {
       mark=0;
       for(j=i+1;j<=24;j++)
          {
            if(*(p+i)>*(p+j))
              {
                mark=1;
                break;
              }         
          }
       if(mark==0)break;             
     }
  temp=*(p+i);
  *(p+i)=*(p+4);
  *(p+4)=temp;
  for(i=1;i<=23;i++)
     { 
       if(i!=4)
         {
       mark=0;
       for(j=i+1;j<=24;j++)
          {
            if(j!=4)
              {
            if(*(p+i)>*(p+j))
              {
                mark=1;
                break;
              }
              }         
          }
       if(mark==0)break;
         }             
     }
  temp=*(p+i);
  *(p+i)=*(p+20);
  *(p+20)=temp;
  for(i=1;i<=23;i++)
     { 
       if(i!=4&&i!=20)
         {
       mark=0;
       for(j=i+1;j<=24;j++)
          {
            if(j!=4&&j!=20)
            { 
             if(*(p+i)>*(p+j))
              {
                mark=1;
                break;
              }
            }         
          }
       if(mark==0)break;
         }             
     }
  temp=*(p+i);
  *(p+i)=*(p+24);
  *(p+24)=temp;
  return(0);     
}
