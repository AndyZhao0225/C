#include<stdio.h>
#include<stdlib.h>
 int main()
{
  float first_average(int *p);
  int poor(int (*p)[5]);
  int excellent(int (*p)[5]);
  int grade[4][5]={{59,77,83,46,73},{86,88,95,87,88},{92,100,93,83,100},{77,84,59,66,84}};
  int *pointer;
  pointer=&grade[0][0];
  printf("��һ��ƽ����Ϊ%f\n",first_average(pointer));
  poor(grade);
  excellent(grade);
  system("pause");
  return(0);     
} 
  
 float first_average(int *p)
{
  float aver;
  aver=(*p+*(p+5)+*(p+10)+*(p+15))/4;
  return(aver);     
}

 int poor(int (*p)[5])
{
  int mark,i,j,k;
  float sum;
  for(i=0;i<=3;i++)
     {
       mark=0;
       for(j=0;j<=4;j++)
          {
            if(*(*p+j)<60) 
              {
                if(mark==0)mark=1;
                else 
                  {
                    printf("ѧ��Ϊ%d��ѧ�����������ϳɼ�������\n",i+1);
                    printf("��ѧ��ȫ����Ŀ�ɼ�Ϊ\n");
                    for(k=0;k<=4;k++)
                       {
                         printf("%4d",*(*p+k));
                         sum=sum+*(*p+k);
                       }
                    printf("\n��ѧ��ƽ���ɼ�Ϊ%f\n",sum/5);
                    sum=0;
                  }          
              }
          }
       p=p+1;
     }
  return(0); 
}

 int excellent(int (*p)[5])
{
  int mark,i,k;
  float sum;
  for(i=0;i<=3;i++)
     {
       mark=0;
       sum=0;
       for(k=0;k<=4;k++)
          {
            sum=sum+*(*p+k);
            if(*(*p+k)<85)mark=1;              
          }       
       if((sum/5)>=90)printf("ѧ��Ϊ%d��ѧ��ƽ������90����\n",i+1);
       if(mark==0)printf("ѧ��Ϊ%d��ѧ��ȫ���γ���85������\n",i+1);
       p=p+1;
     }
  return(0);     
} 
 
