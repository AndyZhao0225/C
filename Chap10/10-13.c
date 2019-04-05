#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 float integral(float a,float b,double (*p)(double),int n)
{
  
  int i;
  float d,sum=0;
  double edge;
  d=(b-a)/n;
  for(i=0;i<=n-1;i++)
     {  
        edge=a+(i+1)*d;
        sum=sum+(*p)(edge)*d;               
     } 
  return(sum);       
} 

 int main()
{
  float a,b;
  int selection;
  double (*pointer)(double);
  printf("�����붨��������\n");
  scanf("%f",&a);
  printf("�����붨��������\n");
  scanf("%f",&b);
  printf("�����뱻���ֺ���������: 1.sin 2.cos 3.exp\n");
  scanf("%d",&selection);
  if(selection==1)pointer=sin;          
  if(selection==2)pointer=cos;              
  if(selection==3)pointer=exp;
  printf("���ֽ��Ϊ%f\n",integral(a,b,pointer,10000));                          
  system("pause");
  return(0);     
}



 
