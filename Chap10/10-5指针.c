#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int n,i,j,mark,memory;
  int queue[50];
  int *p;
  printf("����������\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)queue[i]=i;
  p=&queue[1];
  for(i=n;i>=2;i--)
     { 
       p=p+2;
       while(p>(queue+i))
          {       
            p=p-i; 
          }
       memory=*p;
       for(j=1;j<=n;j++)
          {
            if(p==(queue+j))
              {
                mark=j;
                break;       
              }
          }
       for(j=mark;j<=n-1;j++)queue[j]=*(queue+j+1);
       queue[n]=memory; 
     }  
  printf("���ʣ�µ���Ϊԭ���ĵ�%d��\n",queue[1]);
  system("pause");
  return(0);     
}
