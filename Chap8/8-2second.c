#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int main()
 {
     int a,b,c,jud;
     double x,m,n,x1,x2;
     printf("�����뷽�̲���a,b,c��ֵ\n");
     scanf("%d,%d,%d",&a,&b,&c);
     if(a==0)
       {
          x=-(double)c/b;
          printf("���̵Ľ�Ϊx=%f\n",x);             
       } 
     else 
       {
          jud=b*b-4*a*c;
          m=-(double)b/2/a;
          if(jud==0)
            {
               x=m;
               printf("���̵Ľ�Ϊx=%f\n",x);
            }
          if(jud>0)
            {
              n=sqrt(jud)/2/a;
              x1=m+n;
              x2=m-n;
              printf("���̵Ľ�Ϊx1=%f,x2=%f\n",x1,x2);        
            }
          if(jud<0)
            {
               n=sqrt(-jud)/2/a;
               printf("���̵Ľ�Ϊx1=%f+%fi,x2=%f-%fi\n",m,n,m,n);      
            }   
       }        
     system("pause");
     return(0);
     } 
     
     
