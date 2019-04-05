#include<stdio.h>
#include<stdlib.h>
 char Name[19]; 
 int main()
{ 
  int sort(char array[10][20]);
  int search(char array[10][20],int num);
  int i,number;
  char information[10][20];
  for(i=0;i<=9;i++)   
     {        
       printf("请输入第%d个职工的职工号和姓名\n",i+1);
       scanf("%s",information[i]);
     }
  sort(information);
  printf("请输入要查找的职工号\n");
  scanf("%d",&number);
  search(information,number);
  printf("该职工号所对应的职工为%s\n",Name);
  system("pause");
  return(0);     
} 

  int sort(char array[10][20])
{
  int i,j;
  char finished[10][20]={{'0'},{'1'},{'2'},{'3'},{'4'},{'5'},{'6'},{'7'},{'8'},{'9'}};
  for(i=0;i<=9;i++)
     {
       switch(array[i][0])
       {
         case 48:for(j=1;j!=19;j++)finished[0][j]=array[i][j];break; 
         case 49:for(j=1;j!=19;j++)finished[1][j]=array[i][j];break;
         case 50:for(j=1;j!=19;j++)finished[2][j]=array[i][j];break;
         case 51:for(j=1;j!=19;j++)finished[3][j]=array[i][j];break;
         case 52:for(j=1;j!=19;j++)finished[4][j]=array[i][j];break;
         case 53:for(j=1;j!=19;j++)finished[5][j]=array[i][j];break;
         case 54:for(j=1;j!=19;j++)finished[6][j]=array[i][j];break;
         case 55:for(j=1;j!=19;j++)finished[7][j]=array[i][j];break;
         case 56:for(j=1;j!=19;j++)finished[8][j]=array[i][j];break;
         case 57:for(j=1;j!=19;j++)finished[9][j]=array[i][j];break;
         default:;
       }       
     }
  printf("按职工号从小到大排名后的顺序为\n");
  for(i=0;i<=9;i++)printf("%s\n",finished[i]);
  for(i=0;i<=9;i++)
     {
       for(j=0;j<=19;j++)array[i][j]=finished[i][j];              
     }
  return(0);      
}

  int search(char array[10][20],int num)
{
  int i,a=0,b=9,k,m=0;
  for(i=0;m!=1;i++)
     {
       if(num<=(a+b)/2)
         {
           if(num==(a+b)/2)
             {
               k=(a+b)/2;
               m=1;              
             }
           b=(a+b)/2;
         }
       else a=((a+b)/2)+1;               
     }
  for(i=0;i<=18;i++)Name[i]=array[k][i+1];
  return(0);
} 

  
