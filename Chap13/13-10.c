#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define endValue 999 
#define maxsize 30
 struct staff
{
  char name[20];
  int number;  
  char sex;
  int age;
  char address[30];
  int sallary;
  char health[10];
  char degree[10];    
}rec[maxsize];

 struct staffsim
{
  char name[20];
  int sallary;      
}recsim[maxsize];

 int Write_staff(struct staff* ptr,FILE* fp)
{
  int l=0;
  printf("������ְ������\n���� ְ���� �Ա� ���� סַ ���� ������� �Ļ��̶�\n");
  scanf("%s %d %c %d %s %d %s %s",ptr->name,&ptr->number,&ptr->sex,&ptr->age,ptr->address,&ptr->sallary,ptr->health,ptr->degree);
  while(ptr->number!=endValue)
     {
       if(fwrite(ptr,sizeof(struct staff),1,fp)!=1)printf("�ļ�д�����\n");
       l++;
       scanf("%s %d %c %d %s %d %s %s",ptr->name,&ptr->number,&ptr->sex,&ptr->age,ptr->address,&ptr->sallary,ptr->health,ptr->degree);    
     }
  rewind(fp);
  return l;     
}

 int Write_sim(int l,struct staffsim* ptr,FILE* fp)
{
  int i;
  for(i=0;i<=l-1;i++)
     {
       if(fwrite((ptr+i),sizeof(struct staffsim),1,fp)!=1)printf("���ļ�д�����\n");
     }
  rewind(fp);
  return;     
}

 int Print(int n,FILE *fp)
{
   int i;
   for(i=0;i<=n-1;i++)
     {
        fread(&recsim[i],sizeof(struct staffsim),1,fp);           
        printf("%s %d\n",recsim[i].name,recsim[i].sallary);
     }  
   return;
}

 int main()
{
  FILE *fp;
  struct staff *ptr=&rec[0];
  int i,length;
  if((fp=fopen("employee.txt","wb+"))==NULL)
    {
      printf("���ܴ��ļ�\n");
      exit(0);                            
    }
  length=Write_staff(ptr,fp);
  for(i=0;i<=length-1;i++)fread(&rec[i],sizeof(struct staff),1,fp); 
  for(i=0;i<=length-1;i++)
     {
       strcpy(recsim[i].name,rec[i].name);
       recsim[i].sallary=rec[i].sallary;                     
     }           
  fclose(fp);
  if((fp=fopen("simple_employee.txt","wb+"))==NULL)
    {
      printf("���ܴ��ļ�\n");
      exit(0);                            
    }
  Write_sim(length,&recsim[0],fp);
  printf("\n�򻯺��ְ�������ļ�Ϊ\n");
  Print(length,fp);
  fclose(fp); 
  system("pause");
  return;     
}
