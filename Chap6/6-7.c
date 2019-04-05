#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#define Maxsize 1000
 int main()
{
  int i,j,length,record[Maxsize];
  long sum;
  for(i=2;i<1000;i++)
     {
       sum=1;
       length=0;
       memset(record,-1,sizeof(record));
       for(j=2;j<=(i/2);j++)
          if(i%j==0)
            {
              sum=sum+j;
              record[length++]=j;
            } 
       if(sum==i)
         {
           printf("%d,its factors are 1",i);
           for(j=0;record[j]!=-1;j++)printf(",%d",record[j]);
           printf("\n");
         }                        
     }
  system("pause");
  return;     
}
