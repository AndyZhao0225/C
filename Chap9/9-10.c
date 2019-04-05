#include<stdio.h>
#include<stdlib.h>
#define CHANGE 0
 int main()
{ 
  int i;
  char string[100];
  printf("ÇëÊäÈëÒ»ĞĞ×Ö·û´®\n");
  scanf("%s",string);
  #if CHANGE
     {
       for(i=0;string[i]!='\0';i++)
          {
            if(97<=string[i]&&string[i]<122||65<=string[i]&&string[i]<90)string[i]=string[i]+1;
            if(string[i]=='z'||string[i]=='Z')string[i]=string[i]-25;
          }               
       puts(string);
     }
  #else
     puts(string);  
  #endif
  system("pause");
  return(0);     
}
