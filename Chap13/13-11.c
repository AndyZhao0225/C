#include<stdio.h>                 //��ִ�д��ļ�������ִ��13-10.c�ļ��� �Ҵ��ļ� 
#include<stdlib.h>                // Ϊ���C�������������ϻ�ָ���������棩̷��ǿ���еĲ�����������Ƶ� 
#include<string.h>
 struct staffsim
{
  char name[20];
  int sallary;       
}record[4],*pointer;

 struct staffsim* revise(struct staffsim* p,char* string)
{
  int i,j;
  for(i=0;i<=3;i++)
    {
      if(strcmp(string,(p+i)->name)==0)
        {
          for(j=i+1;j<=3;j++)
            {
               strcpy((p+j-1)->name,(p+j)->name);
               (p+j-1)->sallary=(p+j)->sallary;                  
            }                         
          return p; 
        }   
    }      
  return NULL;
}

 int main()
{
  FILE *fp;
  char del[20];
  int i;
  if((fp=fopen("simple_employee.txt","rb+"))==NULL)
    {
      printf("���ܴ��ļ�\n");
      exit(0);                            
    }
  printf("ԭ�ļ�Ϊ\n");
  for(i=0;i<=3;i++)
     {
       fread(&record[i],sizeof(struct staffsim),1,fp);
       printf("%s %d\n",record[i].name,record[i].sallary);
     } 
  fclose(fp);
  printf("������Ҫɾ����ְ��������\n");
  scanf("%s",del);
  pointer=revise(record,del);
  if(pointer==NULL)
    {
      printf("ԭ�ļ����޴�����!\n");
      system("pause");
      return;
    }
  if((fp=fopen("simple_employee.txt","wb+"))==NULL)
    {
      printf("���ܴ��ļ�\n");
      exit(0);                            
    }
  for(i=0;i<=2;i++)fwrite((pointer+i),sizeof(struct staffsim),1,fp);  
  rewind(fp);
  printf("ɾ�������ݺ��ļ�Ϊ\n");
  for(i=0;i<=2;i++)
    {
      fread(&record[i],sizeof(struct staffsim),1,fp);
      printf("%s %d\n",record[i].name,record[i].sallary);
    } 
  fclose(fp);
  system("pause");
  return;     
} 
