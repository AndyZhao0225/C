#include<stdio.h>
#include<stdlib.h>
 int main()
{ 
  int count(char *p);
  char string[80];
  printf("������һ���ַ���\n");
  gets(string);
  count(string);
  system("pause");
  return(0);     
}

 int count(char *p)
{ 
  int upercase=0,lowercase=0,space=0,digit=0,others=0,mark=0;
  while(*p!='\0')
      {
        if('A'<=*p&&*p<='Z')
          {
            upercase++;
            mark=1;
          }
        if(97<=*p&&*p<=122)
          {
            lowercase++;
            mark=1; 
          }
        if(*p==32)
          {
            space++;
            mark=1;
          }
        if(48<=*p&&*p<=57)
          {
            digit++;
            mark=1;
          }
        if(mark==0)others++;
        mark=0;
        p++;  
      }
  printf("��д��ĸ����Ϊ%d\n",upercase);
  printf("Сд��ĸ����Ϊ%d\n",lowercase);
  printf("�ո����Ϊ%d\n",space);
  printf("���ָ���Ϊ%d\n",digit);
  printf("�����ַ�����Ϊ%d\n",others);
  return(0);     
}
