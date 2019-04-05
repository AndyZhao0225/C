#include<stdio.h>
#include<stdlib.h>
 int main()
{ 
  int month;
  char *pointer[12]; 
  pointer[0]="January";
  pointer[1]="February";
  pointer[2]="March";
  pointer[3]="April";
  pointer[4]="May";
  pointer[5]="June";
  pointer[6]="July";
  pointer[7]="August";
  pointer[8]="September";
  pointer[9]="October";
  pointer[10]="November";
  pointer[11]="December";
  printf("请输入月份号\n");
  scanf("%d",&month);
  printf("其对应的英文名称为\n");
  printf("%s\n",pointer[month-1]);  
  system("pause");
  return(0);     
}
