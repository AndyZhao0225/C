#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int a,b,c,jud;
 double x,m,n,x1,x2;
 int main()
 {
     double solution1(); 
     void solution2();
     void solution3();
     printf("请输入方程参数a,b,c的值\n");
     scanf("%d,%d,%d",&a,&b,&c);
     if(a==0)
       {
          x=-(double)c/b;
          printf("方程的解为x=%f\n",x);             
       } 
     else 
       {
          jud=b*b-4*a*c;
          if(jud==0)
            {
               x=solution1(a,b);
               printf("方程的解为x=%f\n",x);     
            }
          if(jud>0)
            {
                solution2(a,b);   
            }
          if(jud<0)
          {
                solution3(a,b);   
          }
       }        
     system("pause");
     return(0);
     } 
     
 double solution1(int p,int q)
 {
    x=-(double)q/2/p;
    return(x);         
 }
     
 void solution2(int p,int q)
{
     m=-(double)q/2/p;
     n=sqrt(jud)/2/p; 
     x1=m+n;
     x2=m-n;
     printf("方程的解为x1=%f,x2=%f\n",x1,x2);    
}

void solution3(int p,int q)
{
     m=(double)q/2/p;
     n=sqrt(-jud)/2/p;
     printf("方程的解为x1=%f+%fi,x2=%f+%fi\n",m,n,m,n);
}
