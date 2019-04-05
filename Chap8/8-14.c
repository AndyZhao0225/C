#include<stdio.h>
#include<stdlib.h>
 int main()
{ 
  double student_average(int num[5]);
  double subject_average(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j);
  double variance(double average[10]);
  int highest_mark(int num[10][5]);
  int grade[10][5];
  int i,j;
  double sub_aver,vari;
  double stu_aver[10];
  for(i=0;i<=9;i++)
     {
       printf("请输入第%d个学生的成绩\n",i+1);
       scanf("%d,%d,%d,%d,%d",&grade[i][0],&grade[i][1],&grade[i][2],&grade[i][3],&grade[i][4]);                
     }
  for(i=0;i<=9;i++)
     {
       stu_aver[i]=student_average(grade[i]);
       printf("第%d个学生平均分为%4.2f\n",i+1,stu_aver[i]);              
     }
  for(j=0;j<=4;j++)
     {
        sub_aver=subject_average(grade[0][j],grade[1][j],grade[2][j],grade[3][j],grade[4][j],grade[5][j],grade[6][j],grade[7][j],grade[8][j],grade[9][j]);
        printf("科目%d的平均分为%4.2f\n",j+1,sub_aver);            
     }
  highest_mark(grade);
  vari=variance(stu_aver);
  printf("平均分方差为%f\n",vari);
  system("pause");
  return(0);     
}

 double student_average(int num[5])
{
  double aver;
  aver=(double)(num[0]+num[1]+num[2]+num[3]+num[4])/5;
  return(aver);     
}

 double subject_average(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j)
{
  double aver;
  aver=(double)(a+b+c+d+e+f+g+h+i+j)/10;
  return(aver);       
}

 int highest_mark(int num[10][5])
{
  int i,j,m,n,highest;
  highest=num[0][0];
  m=0;
  n=0;
  for(i=0;i<=9;i++)
     {
       for(j=0;j<=4;j++)
       {
         if(num[i][j]>highest)
           {
             highest=num[i][j];
             m=i+1;
             n=j+1;                   
           }
       }    
     }
  printf("所有分数中最高分为第%d个学生的第%d门成绩\n",m,n);
  return(0);    
}

 double variance(double average[10])
{
  double answer,s=0;
  int i;
  for(i=0;i<=9;i++)
     {
        s=s+average[i]*average[i];             
     }
  answer=s/10;
  s=0;
  for(i=0;i<=9;i++)
     {
        s=s+average[i];              
     }
  answer=answer-(s/10)*(s/10);
  return(answer);        
}

