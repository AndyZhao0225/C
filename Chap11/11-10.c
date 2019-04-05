#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct stu)
#define endValue 999
 struct  stu
{
  int num;
  char name[20];
  struct stu *front,*next;       
};

 struct stu* Create()             //����˫����  
{
  struct stu *head,*rear,*p;
  int num,i;
  char name[20];
  head=NULL;
  rear=NULL;
  scanf("%d %s",&num,&name);
  while(num!=endValue)
    {
      p=(struct stu*)malloc(LEN);
      p->num=num;
      strcpy(p->name,name);
      p->next=NULL;
      p->front=NULL;
      if(head==NULL)head=p;
      else 
        {
          p->front=rear;
          rear->next=p;
        }
      rear=p;
      scanf("%d %s",&num,&name);
    }
  return head;        
}

struct stu* Del(struct stu *a,struct stu *b)
{
  struct stu *head=a;
  while(b!=NULL)
    {
      a=head;
      while(a!=NULL)
         {
           if(a->num==b->num)
             {
               if(a==head)
                 {
                   head=a->next;
                   a->next->front=NULL;
                 } 
               else 
                 {
                   if(a->next==NULL)a->front->next=NULL;
                   else 
                     {
                       a->front->next=a->next;
                       a->next->front=a->front;           
                     }
                 }       
               free(a);       
             }
           a=a->next;           
         }
      b=b->next;
    }        
  return head;       
}

int Print(struct stu *p)      //�������и�����ӡ 
{ 
  while(p!=NULL)
    { 
      printf("%d %s\n",p->num,p->name);
      p=p->next;           
    }
  return 0;     
}

 int main()
{
  struct stu *a,*b;
  printf("��������a\n");
  a=Create();
  printf("��������b\n");
  b=Create();
  printf("��a������д����Ϊ\n");
  Print(Del(a,b));   
  system("pause");
  return;     
} 
