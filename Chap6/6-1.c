#include<stdio.h>
#include<stdlib.h>
 int function1(int a,int b)      /*最大公约数*/
{
  int bigger,smaller,result;
  if(a>b)
    {
      bigger=a;
      smaller=b;     
    }
  else 
    {
      bigger=b;
      smaller=a;                
    }
  result=bigger-smaller;
  while(result!=0)
     {
       if(result<smaller)
         {
           bigger=smaller;
           smaller=result;                
         }
       else bigger=result;
       result=bigger-smaller;
     }   
  return smaller;    
}
 
 int function2(int a,int b)    /*最小公倍数*/
{
  int factor=function1(a,b);
  return (a/factor)*b;       
}

 int main()
{
  int m,n;
  printf("请输入两个正整数\n");
  scanf("%d %d",&m,&n);
  printf("它们的最大公约数为%d\n它们的最小公倍数为%d\n",function1(m,n),function2(m,n));
  system("pause");
  return;     
}
