#include<stdio.h>    //�����д��ļ���������13-6.c��13-7.c 
#include<stdlib.h>
#include<string.h>
 struct student
{
  char name[20];
  int number,score[3];
  float average;          
}rec[6];

 float Aver(int a,int b,int c)
{   
  return (float)(a+b+c)/3;       
}
 
 struct student* Insert(struct student* p,struct student in)
{
  int i,j,k;
  struct student *origin;
  for(i=0;i<=4;i++)
     {
       if((p+i)->average>in.average)
         {
           for(j=4;j>=i;j--)
              {
                strcpy((p+j+1)->name,(p+j)->name);
                (p+j+1)->number=(p+j)->number;
                for(k=0;k<=2;k++)(p+j+1)->score[k]=(p+j)->score[k];
                (p+j+1)->average=(p+j)->average;             
              }
           strcpy((p+i)->name,in.name);
           (p+i)->number=in.number;
           for(k=0;k<=2;k++)(p+i)->score[k]=in.score[k];
           (p+i)->average=in.average;
           return p;                        
         }             
     }
  strcpy((p+i)->name,in.name);
  (p+i)->number=in.number;
  for(k=0;k<=2;k++)(p+i)->score[k]=in.score[k];
  (p+i)->average=in.average;
  return p;      
}

 int Print(int n,FILE *fp)
{
   int i;
   for(i=0;i<=n;i++)
     {
        fread(&rec[i],sizeof(struct student),1,fp);           
        printf("%s %d %d %d %d %.2f\n",rec[i].name,rec[i].number,rec[i].score[0],rec[i].score[1],rec[i].score[2],rec[i].average);
     }  
   return;
}
 
 int main()
{
  FILE *fp;
  int i;
  struct student a,*pointer;
  printf("������Ҫ�����ѧ����Ϣ\n");
  scanf("%s %d %d %d %d",a.name,&a.number,&a.score[0],&a.score[1],&a.score[2]);
  a.average=Aver(a.score[0],a.score[1],a.score[2]);
  if((fp=fopen("stud_sort.txt","rb"))==NULL)
    {
       printf("���ܴ򿪸��ļ�\n");
       exit(0);                                       
    }
  printf("ԭ�����ļ�Ϊ\n");
  Print(4,fp);
  fclose(fp);
  pointer=Insert(&rec[0],a);
  if((fp=fopen("new_stud_sort.txt","wb+"))==NULL)
    {
       printf("���ܴ򿪸��ļ�\n");
       exit(0);                                       
    }
  for(i=0;i<=5;i++)if(fwrite(pointer+i,sizeof(struct student),1,fp)!=1)printf("�ļ�д�����\n");
  rewind(fp);
  printf("\n��������ݺ����ļ�Ϊ\n");
  Print(5,fp);
  fclose(fp);
  system("pause");
  return;     
} 
