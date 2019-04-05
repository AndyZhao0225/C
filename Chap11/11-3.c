#include<stdio.h>
#include<stdlib.h>
 struct stu
{
  int num;
  char name[20];
  int score[3];       
}; 

 int print(struct stu a[])
{
  int i;
  for(i=0;i<=4;i++)
     {
       printf("%d %-8s %d %d %d",a[i].num,a[i].name,a[i].score[0],a[i].score[1],a[i].score[2]);
       printf("\n");              
     } 
  return 0;     
}

 int main()
{ 
  int i;
  struct stu grade[5]; 
  printf("请输入学生数据\n");
  for(i=0;i<=4;i++)scanf("%d %s %d %d %d",&grade[i].num,&grade[i].name,&grade[i].score[0],&grade[i].score[1],&grade[i].score[2]);
  printf("您输入的学生数据为\n");
  print(grade);
  system("pause");
  return 0;
} 
