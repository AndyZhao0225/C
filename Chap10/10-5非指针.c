#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int n,i,memory,j,mark;
  int queue[50];
  printf("����������\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)queue[i]=i;
  mark=1;
  for(i=n;i>=2;i--)
     { 
       mark=(mark+2)%i;
       if(mark==0)mark=i;   
       memory=queue[mark];  
       for(j=mark;j<=n-1;j++)queue[j]=queue[j+1];
       queue[n]=memory;    
     }
  printf("���ʣ�µ���Ϊԭ���ĵ�%d��\n",queue[1]);
  system("pause");
  return(0);     
}
