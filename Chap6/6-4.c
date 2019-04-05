#include<stdio.h>
#include<stdlib.h>
 long long multiply(int n)
{ 
  if(n==1)return 1;
  return n*multiply(n-1);   
}
 
 int main()
{
  int n=1;
  long long sum=0;
  while(n<=20)
     {
       sum=sum+multiply(n);
       n++;
     }
  printf("%lld\n",sum);
  system("pause");
  return;     
} 
