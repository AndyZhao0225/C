#include<stdio.h>
#include<stdlib.h>
 int main()
{
  int backward(int *p[],int n,int m);
  int i,m,n;
  int array[100];
  int *pointer[100];
  printf("���ж��ٸ�����");
  scanf("%d",&n);
  printf("��������%d����\n",n);
  for(i=0;i<=n-1;i++)
     {
       scanf("%d",&array[i]);
       pointer[i]=&array[i];
     } 
  printf("���ƶ���λ��\n");
  scanf("%d",&m);
  backward(pointer,n,m);
  printf("����%d������˳��Ϊ\n",m);
  for(i=0;i<=n-1;i++)printf("%3d",array[i]);
  printf("\n");
  system("pause");
  return(0);     
}

 int backward(int *p[],int n,int m)
 {
  int media[100]={0};
  int i; 
  for(i=m;i<=n-1;i++)media[i]=*p[i-m];           
  for(i=n-m;i<=n-1;i++)*p[i-(n-m)]=*p[i];         
  for(i=m;i<=n-1;i++)*p[i]=media[i];              
  return(0);  
}
