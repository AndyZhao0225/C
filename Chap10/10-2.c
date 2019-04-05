#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main()
{
  int sort(char array[][],char (*p1)[],char (*p2)[],char (*p3)[]);
  int i;
  char a[3][30];
  char (*pointer1)[30],(*pointer2)[30],(*pointer3)[30];
  for(i=1;i<4;i++)
     {
       printf("请输入第%d个字符串\n",i);
       gets(a[i-1]);
     }
  pointer1=a;
  pointer2=a+1;
  pointer3=a+2;
  sort(a,pointer1,pointer2,pointer3);
  printf("字符串由小到大的顺序为\n");
  printf("%s\n",pointer1);
  printf("%s\n",pointer2);
  printf("%s\n",pointer3);
  system("pause");
  return(0);     
}

 int sort(char array[][],char (*p1)[],char (*p2)[],char (*p3)[])
{ 
  int swap(char (*pt1)[],char (*pt2)[]);
  swap(p1,p2);
  swap(p1,p3);
  swap(p2,p3);
  return(0); 
}

 int swap(char (*pt1)[],char (*pt2)[])
{
  char temp[30];
  if(strcmp(*pt1,*pt2)>0)
    {
       strcpy(temp,*pt1);
       strcpy(*pt1,*pt2);
       strcpy(*pt2,temp);                
    } 
  return(0);     
}

 
