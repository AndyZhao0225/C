#include<stdio.h>
#include<stdlib.h>
 int main()
{ 
  int n,x;
  double result;
  double p(int,int); 
  printf("���������õ½���������ֵ\n");
  scanf("%d,%d",&n,&x);
  result=p(n,x);
  printf("���Ϊ%f\n",result);
  system("pause");
  return(0);     
} 

 double p(int a,int b)
{
  double answer;
  if(a==0)answer=1.0;
  if(a==1)answer=(double)b;
  if(a>1)answer=((2*a-1)*b-p(a-1,b)-(a-1)*p(a-2,b))/a;
  return(answer);     
}
