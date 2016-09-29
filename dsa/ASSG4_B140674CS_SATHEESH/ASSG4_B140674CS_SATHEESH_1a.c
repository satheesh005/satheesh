#include <stdio.h>
#include <stdlib.h>
int number;
struct node
{
    int data;
    struct node* next;
};
struct hash{
 struct node* head;

};
int j,k;
struct hash hash[1000];
void insert(struct hash *s,int l)
{
  struct node* temp=(struct node*)malloc(sizeof(struct node));
  if(s->head==NULL)
  {
     temp->data = l;
     temp->next=NULL;
     s->head=temp;
     return;
  }
  temp->data=l;
  temp->next=s->head;
  s->head=temp;

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
int hashfunction(int k)
    {
        int z;
        if(k>=0)
        {
            z=k%number;
            return z;
        }
        else{
            z=((k%number)+number)%number;
            return z;

        }
    }

int main()
{ int i;j=0;char c;float x;
    for(i=0;i<1000;i++)
    {
        hash[i].head=NULL;
    }
    if(scanf("%f",&x)!=1 || x <=0)
    {
        printf("INVALID INPUT\n");
        return 0;
    }
    number=x;
    if(number-x < 0)
    {
        printf("INVAID INPUT\n");
        return 0;
    }

   while(1)

   {  scanf("%c",&c);
       scanf("%c",&c);
        switch(c)
   {
   case 'i':
    {
       if(scanf("%f",&x)!=1)
       {
           printf("INVALID INPUT\n");
           return 0;
       }
       i=x;
       if(i-x <0)
       {
           printf("INVALID INPUT\n");
           return 0;
       }
        j=hashfunction(i);
       insert(&hash[j],i);
       struct node* temp1=hash[j].head;
       printf("%d",j);
           printf("\n");
        break;
    }
   case 'f':
    { if(scanf("%f",&x)!=1)
       {
           printf("INVALID INPUT\n");
           return 0;
       }
       i=x;
       if(i-x <0)
       {
           printf("INVALID INPUT\n");
           return 0;
       }

        k=hashfunction(i);
        printf("%d ",k);
        search(&hash[k],i);
  break;
    }
   case 's':
    return 0;
   default:
    {
        printf("INVALID INPUT\n");
        break;

    }
    }}}
    
