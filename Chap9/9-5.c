#include<stdio.h>
#include<stdlib.h>
#define NL putchar('\n')
#define PR(format,value) printf("value=%format\t",(value))
#define PRINT1(f,x1) PR(f,x1);NL
#define PRINT2(f,x1,x2) PR(f,x1);PRINT1(f,x2)
 int main()
{
  float x=5,x1=3,x2=8,d;
  PR(d,x);
  PRINT1(d,x);
  PRINT2(d,x1,x2);
  system("pause");
  return(0);     
} 
