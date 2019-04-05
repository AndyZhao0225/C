#include<stdio.h>
#include<stdlib.h>
 struct stu
{
  int num;
  char name[20];
  int score[3];     
};

 struct stu* Input(struct stu *p)
{
  int i;
  for(i=0;i<=4;i++)
     {
       scanf("%d %s %d %d %d",&p->num,&p->name,&p->score[0],&p->score[1],&p->score[2]);
       p++;              
     }      
  return p-5;        
}

 int Print(struct stu *p)
{
  int i;
  for(i=0;i<=4;i++)
     {
       printf("%d %s %d %d %d\n",p->num,p->name,p->score[0],p->score[1],p->score[2]);  
       p++;
     }
  return 0;      
}

 int main()
{
  int i;
  struct stu grade[5]; 
  struct stu *pointer=&grade[0],*q;
  printf("请输入学生数据\n");
  pointer=Input(pointer);
  printf("您输入的数据为\n");
  Print(pointer);
  system("pause");
  return;     
} 
