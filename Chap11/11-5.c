#include<stdio.h>
#include<stdlib.h>
 struct
{
  int num,C,Calculus,English;
  char name[20];
  float average;
}stu[10];

 int main()
{
  int i,record=0;
  float sum=0,total_aver,largest=0;
  printf("������ѧ������\n");
  for(i=0;i<=9;i++)
     {
       scanf("%d %s %d %d %d",&stu[i].num,&stu[i].name,&stu[i].C,&stu[i].Calculus,&stu[i].English);
       stu[i].average=(float)(stu[i].C+stu[i].Calculus+stu[i].English)/3;
       if(stu[i].average>largest)
         {
           largest=stu[i].average;
           record=i;
         }
       sum=sum+stu[i].average;
     }
  total_aver=sum/10;
  printf("ƽ�������Ϊ\n");
  for(i=0;i<=9;i++)printf("%d %s %.3f\n",stu[i].num,stu[i].name,stu[i].average);
  printf("���ſγ�����ƽ����Ϊ%.3f\nƽ������ߵ�ѧ��Ϊ\n",total_aver);
  printf("%d %s %d %d %d %.3f\n",stu[record].num,stu[record].name,stu[record].C,stu[record].Calculus,stu[record].English,stu[record].average);
  system("pause");
  return;     
}
