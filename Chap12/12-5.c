#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int transform(char *p)
{
  int i,record[15];
  unsigned short value=0,mask=1;
  if(*p=='0')puts(p);
  else 
    {
      for(i=1;i<=15;i++)
         {
           if(*(p+i)=='0')*(p+i)='1';
           else *(p+i)='0';                   
         }
      for(i=1;i<=15;i++)if(*(p+i)=='1')value=value+(unsigned short)pow(2,15-i); 
      value=value+1;
      for(i=0;i<=14;i++)
         {
           mask=1;
           mask=mask<<i;
           record[i]=(value&mask)>>i;               
         }
      printf("1");
      for(i=14;i>=0;i--)printf("%d",record[i]);  
      printf("\n");                
    }
  return;            
}

 int main() 
{
  char array[17];
  printf("请输入被操作数的原码\n");
  scanf("%s",array);
  printf("该数的补码为\n");
  transform(array);
  system("pause");
  return;     
}
