#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int strcmp(char *p1,char *p2);
  char s1[100],s2[100];
  char *pointer1,*pointer2; 
  printf("ÇëÊäÈëÁ½ĞĞ×Ö·û´®\n");
  gets(s1);
  gets(s2);
  pointer1=s1;
  pointer2=s2;
  printf("%d\n",strcmp(pointer1,pointer2));
  system("pause");
  return(0);     
}

 int strcmp(char *p1,char *p2)
{
  int i,mark=0;
  for(i=0;*(p1+i)!='\0'&&*(p2+i)!='\0';i++)
     {
       if(*(p1+i)!=*(p2+i))
         {  
            return *(p1+i)-*(p2+i);
            mark=1;
            break;                 
         }                 
     }
  if(mark==0)
     {
       if(*(p1+i)=='\0'&&*(p2+i)!='\0')return -*(p2+i);
       if(*(p1+i)!='\0'&&*(p2+i)=='\0')return *(p1+i);
       return 0;
     }    
}
