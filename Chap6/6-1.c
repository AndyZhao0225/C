#include<stdio.h>
#include<stdlib.h>
 int function1(int a,int b)      /*���Լ��*/
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
 
 int function2(int a,int b)    /*��С������*/
{
  int factor=function1(a,b);
  return (a/factor)*b;       
}

 int main()
{
  int m,n;
  printf("����������������\n");
  scanf("%d %d",&m,&n);
  printf("���ǵ����Լ��Ϊ%d\n���ǵ���С������Ϊ%d\n",function1(m,n),function2(m,n));
  system("pause");
  return;     
}
