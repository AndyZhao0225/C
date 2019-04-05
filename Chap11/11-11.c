#include<stdio.h>
#include<stdlib.h>
#define endValue 999
#define LEN sizeof(struct node)
 struct node
{
  int num,age;
  char name[20];
  enum{m,f} sex;
  struct node *front,*next;      
};

  struct node* Create()             //����˫����  
{
  struct node *head,*rear,*p;
  int num,age,i;
  enum{m,f} sex;
  char name[20];
  head=NULL;
  rear=NULL;
  scanf("%d %s %c %d",&num,&name,&sex,&age);
  while(num!=endValue)
    {
      p=(struct node*)malloc(LEN);
      p->num=num;
      strcpy(p->name,name);
      p->sex=sex;
      p->age=age;
      p->next=NULL;
      p->front=NULL;
      if(head==NULL)head=p;
      else 
        {
          p->front=rear;
          rear->next=p;
        }
      rear=p;
      scanf("%d %s %c %d",&num,&name,&sex,&age);
    }
  return head;        
}

 struct node* Del(struct node *p,int a)
{
  int mark=0;
  struct node *head=p;
  while(p!=NULL)
    {
      if(p->age==a)
        {
          if(p==head)
            {
              head=p->next;
              p->next->front=NULL;
            } 
          else 
            {
              if(p->next==NULL)p->front->next=NULL;
              else 
                {
                  p->front->next=p->next;
                  p->next->front=p->front;           
                }
            }
          free(p);
          mark=1;         
        }
      p=p->next;
    }        
  if(mark==0)return NULL;
  return head;       
}

 int Print(struct node *p)      //�������и�����ӡ 
{ 
  while(p!=NULL)
    { 
      printf("%d %s %c %d\n",p->num,p->name,p->sex,p->age);
      p=p->next;           
    }
  return 0;     
}
 
 int main()
{ 
  int a;
  struct node* pointer;
  printf("��������\n");
  pointer=Create();
  printf("������Ҫɾ�����˵�����ֵ\n");
  scanf("%d",&a);
  pointer=Del(pointer,a);
  if(pointer==NULL)printf("�������κ��˵��������Ҫɾ�������䣡\n");
  else 
    { 
      printf("ɾ���󣬱�Ϊ\n");
      Print(pointer);
    }
  system("pause");
  return 0;     
}


