#include <stdio.h>
#include <stdlib.h>

struct Node
{
    long int data;
     struct Node* next;

};
struct stack
{
    struct Node* head;
    struct Node* tail;
};
void enqueue(struct stack*,long int);
long int dequeue(struct stack*);
void print_queue(struct stack*);
long int main()
{ struct stack s;
s.head = NULL;
s.tail = NULL;
long int j,k,l,i,m,n;char c,d;
   while(1)
{
scanf("%c",&c);
  switch (c)
  {
  case 'e':
    {  if(scanf("%ld",&i)!=1)
{printf("invalid input\n");
scanf("%c",&d);
break;}
        enqueue(&s, i);
        break;
    }
    case 'd':
    {
        j= dequeue(&s);
        if(j==-3)
        {
         break;
        }
        printf("%ld\n",j);
        break;
    }
    case 'p':
        {
            print_queue(&s);
            break;
        }
    case 's':
        return 0;
    default:
{
        printf("enter correct option\n");
break;}}
scanf("%c",&d);


  }



}

void enqueue(struct stack* s,long int data)
{if(data<0|| data > 2147483648)
{printf("invalid input\n");
return;} 

long int i;
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
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

void print_queue(struct stack* s)
{
    struct Node* temp = s->head;
    if(s->head==NULL)
    {
        printf("empty");
    }
    while(temp!= NULL)
    {
        printf("%ld ",temp->data);
        temp = temp ->next;
    }
    printf("\n");
    return ;
}
long int dequeue(struct stack* s)
{ long int i;
    struct Node* temp1 =s->head;
      if(s->head==NULL)
      {
          printf("empty\n");
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

