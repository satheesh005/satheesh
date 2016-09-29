#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int number;
struct node
{
    int data;
    struct node* next;
};
struct hash{
 struct node* head;

};
struct Node
{
    int data;
     struct Node* next;

};
struct queue
{
    struct Node* head;
    struct Node* tail;
};
struct Node1
{
    int data;
     struct Node1* next;

};
struct stack
{
    struct Node1* head;
};
void insert(struct queue*,int);
int delete(struct queue*);
void push(struct stack*,int);
int pop(struct stack*);
struct hash hash[10000];
int isemptyqueue(struct queue* p)
{
    if(p->head==NULL)
        return 1;
    return 0;
}
int isemptystack(struct stack* p)
{
    if(p->head==NULL)
        return 1;
    return 0;
}


void insert1(struct hash *s,int l)
{
  struct node* temp=(struct node*)malloc(sizeof(struct node));
  if(s->head==NULL)
  {

     temp->data = l;
     temp->next=NULL;
     s->head=temp;
     return;
  }
  struct node* temp2=s->head;
  while(temp2->next!=NULL)
  {
      temp2=temp2->next;
  }
  temp->data=l;
  temp->next=NULL;
  temp2->next=temp;

}
void search(struct hash *s ,int l)
{  struct node* p=s->head;
    if(s->head==NULL)
    {
        printf("NOT FOUND\n");
        return;
    }
    while(p!=NULL)
    {
        if(p->data==l)
        {
            printf("FOUND\n");
            return;
        }
        p=p->next;
    }
    printf("NOT FOUND\n");
    return;
}
void print(struct queue* q)
{
    struct Node* temp;
    temp=q->head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


void insert(struct queue* s,int data)
{ int i;
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node*));
    temp1->next=NULL;
    temp1->data=data;
    if(s->head==NULL)
    {
        temp1->next=s->head;
        s->head=temp1;
        s->tail=temp1;
        return;
    }
   struct Node* temp2 =s->tail;

    temp1->next = temp2->next;
    temp2->next = temp1;
    s->tail=temp1;
}
int delete(struct queue* s)
{ int i;
    struct Node* temp1 =s->head;
      if(s->head==NULL)
      {
          return -3;
      }
      else if(temp1->next==NULL)
      {
          s->tail=NULL;
          i=temp1->data;
        s->head =temp1->next;

        free(temp1);
        return i;
      }

      i=temp1->data;
        s->head =temp1->next;

        free(temp1);
        return i;

}


void push(struct stack* s, int data)
{ int i;
    struct Node1* temp1=(struct Node1*)malloc(sizeof(struct Node1*));
    temp1->next=NULL;
    temp1->data=data;
        temp1->next=s->head;
        s->head=temp1;
        return;


}

int pop(struct stack* s)
{ int i;
    struct Node1* temp1 =s->head;
      if(s->head==NULL)
      {
          printf("empty\n");
          return -3;
      }i=temp1->data;
        s->head =temp1->next;

        free(temp1);
        return i;

}
void bfs(int x,int y)
{int r,k;int count=0,count1=0;
int ab[1000],bc[1000];
    struct queue q;
    q.head=NULL;
    insert(&q,x);
    while(q.head!=NULL)
        {
            //print(&q);
             r=delete(&q);
    for(k=0;k<count;k++)
    {
        if(ab[k]==r)
        {
            goto z;
        }
    }
    printf("%d ",r);
    ab[count]=r;count++;
    if(r==y)
    {
        return;
    }
    struct node* temp = hash[r].head;
    while(temp!=NULL)
    {
        insert(&q,temp->data);
        temp=temp->next;
    }
      z:for(k=0;k<3;k++)
      {

      }

    }
}
void dfs(int x,int y)
{int r,k;int abc[10000];int i=0;
    struct stack q;
    int count=0,count1=0;
int bc[1000];
    q.head=NULL;
    push(&q,x);
    while(!isemptystack(&q))
    {  r=pop(&q);i=0;
    for(k=0;k<count1;k++)
    {
        if(bc[k]==r)
        {
            goto z;
        }
    }
    printf("%d ",r);
    bc[count1]=r;count1++;
    if(r==y)
    {
        return;
    }
    struct node* temp = hash[r].head;
    while(temp!=NULL)
    {abc[i]=temp->data;i++;

        temp=temp->next;
    }
    for(k=i-1;k>=0;k--)
    {
        push(&q,abc[k]);
    }
      z:
      for(k=0;k<count1;k++)
      {

      }
    }
}


int main()
{ int i,l=0,j=0,m,o,p,t=-3;char c,arr[10000];float x;
    for(i=0;i<10000;i++)
    {
        hash[i].head=NULL;
    }
    scanf("%d",&m);
if(m>10000 || m<1)
{printf("INVALID INPUT\n");
return 0;}
    scanf("%c",&c);
for(i=0;i<m;i++)
{
    scanf("%c",&c);
    if(c=='\n')
    {
        hash[i].head=NULL;
    }
    else{
       while(c!='\n')
       {
        while(c!=' '&& c!='\n')
        {
            arr[l]=c;l++;
            scanf("%c",&c);
        }
        arr[l]='\0';
        p=atoi(arr);
if(p<0 || p>9999)
{printf("INVALID INPUT\n");return 0;}
if(t>p)
{printf("INVALID INPUT1\n");
return 0;}t=p;
        insert1(&hash[i],p);
        l=0;
        if(c!='\n') scanf("%c",&c);
       }

    }t=-3;
}
l=0;
while(1)
{   scanf("%s",arr);


    if(strcmp(arr,"dfs")==0)
    {
       scanf("%d%d",&i,&j);
        dfs(i,j);printf("\n");
    }
    if(strcmp(arr,"bfs")==0)
    {
        scanf("%d%d",&i,&j);
bfs(i,j);
printf("\n");
    }
    if(strcmp(arr,"stp")==0)
    {
        return 0;
    }

}

}

