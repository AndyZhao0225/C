#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int a,b,c,d;
 double x=1,x0,f1,f2,resul;
 int main()
 {
   double result(int p,int q,int r,int s);
   printf("请输入方程参数a,b,c,d\n");
   scanf("%d,%d,%d,%d",&a,&b,&c,&d);
   resul=result(a,b,c,d);
   printf("方程在1附近的根为%f\n",resul);
   system("pause");
   return(0);    
 }
 
 double result(int p,int q,int r,int s)
 {
   do
   {
     x0=x;
     f1=p*x*x*x+q*x*x+r*x+s;
     f2=3*p*x*x+2*q*x+r;
     x=x0-f1/f2;  
   }while(fabs(x-x0)>=0.00001);
   return(x);       
 }
