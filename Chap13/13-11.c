#include<stdio.h>                 //欲执行此文件，必先执行13-10.c文件。 且此文件 
#include<stdlib.h>                // 为针对C程序设计题解与上机指导（第三版）谭浩强著中的测试数据所设计的 
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
      printf("不能打开文件\n");
      exit(0);                            
    }
  printf("原文件为\n");
  for(i=0;i<=3;i++)
     {
       fread(&record[i],sizeof(struct staffsim),1,fp);
       printf("%s %d\n",record[i].name,record[i].sallary);
     } 
  fclose(fp);
  printf("请输入要删除的职工的姓名\n");
  scanf("%s",del);
  pointer=revise(record,del);
  if(pointer==NULL)
    {
      printf("原文件中无此数据!\n");
      system("pause");
      return;
    }
  if((fp=fopen("simple_employee.txt","wb+"))==NULL)
    {
      printf("不能打开文件\n");
      exit(0);                            
    }
  for(i=0;i<=2;i++)fwrite((pointer+i),sizeof(struct staffsim),1,fp);  
  rewind(fp);
  printf("删除该数据后文件为\n");
  for(i=0;i<=2;i++)
    {
      fread(&record[i],sizeof(struct staffsim),1,fp);
      printf("%s %d\n",record[i].name,record[i].sallary);
    } 
  fclose(fp);
  system("pause");
  return;     
} 
