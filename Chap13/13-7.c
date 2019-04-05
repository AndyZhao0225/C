#include<stdio.h>     //欲运行此文件，先运行13-6.c    
#include<stdlib.h>
#include<string.h>    
 struct student
{
  char name[20];
  int number,score[3];
  float average;          
}rec[5];

 int swap(struct student *a,struct student *b)
{
  struct student temp;
  int i;
  strcpy(temp.name,a->name);                        //交换a与temp 
  temp.number=a->number;
  for(i=0;i<=2;i++)temp.score[i]=a->score[i];
  temp.average=a->average;
  
  strcpy(a->name,b->name);                          //交换a与b 
  a->number=b->number;
  for(i=0;i<=2;i++)a->score[i]=b->score[i];
  a->average=b->average;
   
  strcpy(b->name,temp.name);                        //交换b与temp 
  b->number=temp.number;
  for(i=0;i<=2;i++)b->score[i]=temp.score[i];
  b->average=temp.average;
  return;       
}

 struct student* sort(struct student* p)
{
  int i,j;
  struct student temp;
  for(i=4;i>=1;i--)for(j=0;j<=i-1;j++)if((p+j)->average>(p+j+1)->average)swap((p+j),(p+j+1));                   
  return p;        
}

 int main()
{
  int i;
  FILE *fp;
  struct student* pointer;
  if((fp=fopen("stud.txt","rb"))==NULL)
    {
       printf("不能打开该文件\n");
       exit(0);                                 
    }
  for(i=0;i<=4;i++)fread(&rec[i],sizeof(struct student),1,fp);
  fclose(fp);
  pointer=sort(rec); 
  if((fp=fopen("stud_sort.txt","wb+"))==NULL)
    {
       printf("不能打开该文件\n");
       exit(0);                                       
    }
  for(i=0;i<=4;i++)fwrite(pointer+i,sizeof(struct student),1,fp);
  rewind(fp);
  for(i=0;i<=4;i++)
     {
        fread(&rec[i],sizeof(struct student),1,fp);           
        printf("%s %d %d %d %d %.2f\n",rec[i].name,rec[i].number,rec[i].score[0],rec[i].score[1],rec[i].score[2],rec[i].average);
     }
  fclose(fp);
  system("pause");
  return;     
}
