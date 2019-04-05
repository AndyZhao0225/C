#include<stdio.h>
#include<stdlib.h> 
#define LEN sizeof(struct node)
#define endValue 999
 struct node
{
  int num,score;
  struct node* next;      
};
 
 struct node* Create()
{
  struct node *head,*rear,*p;
  int x,y;
  head=NULL;
  rear=NULL;
  printf("��ѧ����������\n");
  scanf("%d %d",&x,&y);
  while(x!=endValue)
    {
      p=(struct node*)malloc(LEN);
      p->num=x;
      p->score=y;
      p->next=NULL;
      if(head==NULL)head=p;
      else rear->next=p;
      rear=p;
      scanf("%d %d",&x,&y);
    } 
  return head;        
}

 struct node* Combine(struct node *a,struct node *b)
{
  struct node *head,*pre,*record;
  if(a->num<b->num)pre=a;
  else pre=b;  
  head=pre;             
  while(a!=NULL&&b!=NULL)
    {
      if(a->num<b->num)
        {
          record=a->next; 
          pre->next=a;
          pre=a;
          a=record;
        }
      else 
        {
          record=b->next;
          pre->next=b;
          pre=b;
          b=record;           
        }
    }    
  if(a==NULL)pre->next=b;
  else pre->next=a; 
  return head;        
}

 int Print(struct node *p)      //�������и�����ӡ 
{ 
  while(p!=NULL)
    { 
      printf("%d %d\n",p->num,p->score);
      p=p->next;           
    }
  return 0;     
} 

 int main()
{
  struct node *a,*b;
  printf("�뽨������a\n");
  a=Create();
  printf("�뽨������b\n");
  b=Create();
  printf("��Ҫ��ϲ��������Ϊ\n");
  Print(Combine(a,b));
  system("pause");
  return;     
}
