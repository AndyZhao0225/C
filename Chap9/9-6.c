#include<stdio.h>
#include<stdlib.h>
#define NL putchar('\n')
#define Pr(a) printf("%6.2f",a)
#define One(a,b,c) Pr(a);NL;Pr(b);NL;Pr(c);NL
#define Two(a,b,c) Pr(a);Pr(b);NL;Pr(c);NL
#define Three(a,b,c) Pr(a);Pr(b);Pr(c);NL
 int main()
{ 
  float num1,num2,num3;
  printf("请输入三个实数\n");
  scanf("%f,%f,%f",&num1,&num2,&num3);
  printf("一行输出一个实数\n");
  One(num1,num2,num3);
  printf("一行输出两个实数\n");
  Two(num1,num2,num3);
  printf("一行输出三个实数\n");
  Three(num1,num2,num3); 
  system("pause");
  return(0);     
}
