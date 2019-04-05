#include<stdio.h>
#include<stdlib.h>
 int main()
{ 
  int i;
  int array[10]={1,2,3,4,5,6,7,8,9,0};
  int *pointer[10];
  for(i=0;i<=9;i++)pointer[i]=&array[i];          
  int print(int *p[10]);
  int scan(int *p[10]);
  int function(int *p[10]);
  scan(pointer);
  function(pointer);
  print(pointer);
  system("pause");
  return(0);     
}
 
 int scan(int *p[10])
{ 
  int a[10];
  int i;
  printf("ÇëÊäÈë10¸öÕûÊý\n");
  for(i=0;i<=9;i++)scanf("%d",&a[i]);
  for(i=0;i<=9;i++)*p[i]=a[i];
  return(0);     
}
 
 int function(int *p[10])
{
  int i,j,k=0,m=0,temp;
  for(i=0;i<=9;i++)
     {
       for(j=i;j<=9;)if(*p[i]>*p[j++])k=1;
       if(k==0)
         {
           temp=*p[i];
           *p[i]=*p[0];
           *p[0]=temp; 
           break;   
         }
       k=0;
     }
  k=0;
  for(i=0;i<=9;i++)
     {
       for(j=i;j<=9;)if(*p[i]<*p[j++])k=1;
       if(k==0)
         {
           temp=*p[i];
           *p[i]=*p[9];
           *p[9]=temp; 
           break;   
         }
       k=0;              
     }
  return(0);     
}
 
 int print(int *p[10])
{
  int i;
  for(i=0;i<=9;i++)printf("%d  ",*p[i]);
  printf("\n");              
  return(0);     
}
