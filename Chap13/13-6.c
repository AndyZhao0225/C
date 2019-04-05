#include<stdio.h>
#include<stdlib.h>
 struct student
{
  char name[20];
  int number,score[3];
  float average;          
}rec[5];

 float aver(int a,int b,int c)
{   
  return (float)(a+b+c)/3;       
} 

 int main()
{
  int i;
  FILE *fp; 
  printf("请输入学生数据\n");
  for(i=0;i<=4;i++)
     {
       scanf("%s %d %d %d %d",rec[i].name,&rec[i].number,&rec[i].score[0],&rec[i].score[1],&rec[i].score[2]);
       rec[i].average=aver(rec[i].score[0],rec[i].score[1],rec[i].score[2]);
     }
  if((fp=fopen("stud.txt","wb+"))==NULL)
    {
      printf("不能打开此文件\n");
      exit(0);                                
    } 
  for(i=0;i<=4;i++)if(fwrite(&rec[i],sizeof(struct student),1,fp)!=1)printf("文件写入出错\n");
  rewind(fp);
  for(i=0;i<=4;i++)
     {
       fread(&rec[i],sizeof(struct student),1,fp);
       printf("%s %d %d %d %d %f\n",rec[i].name,rec[i].number,rec[i].score[0],rec[i].score[1],rec[i].score[2],rec[i].average);
     }
  fclose(fp);              
  system("pause");
  return;     
} 
