#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int a,n,i,j;
  long long temp=0,base,Sn=0;
  printf("请输入a与n的值\n");
  scanf("%d %d",&a,&n);
  for(i=1;i<=n;i++)
     {
       base=1;
       for(j=1;j<i;j++)base=10*base;
       temp=a*base+temp;
       Sn=Sn+temp;            
     }
  printf("Sn=a+aa+aaa+...=%lld\n",Sn);
  system("pause");
  return;     
}
