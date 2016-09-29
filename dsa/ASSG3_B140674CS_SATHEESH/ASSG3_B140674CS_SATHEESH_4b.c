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
};
void push(struct stack*,long int);
long int pop(struct stack*);
void print_stack(struct stack*);
long int main()
{ struct stack s;
s.head = NULL;
long int j,k,l,i,m,n;char c,d;
while(1)
{scanf("%c",&c);

  switch (c)
  {
  case 'a':
    {  if(scanf("%ld",&i)!=1)
{printf("invalid input\n");
scanf("%c",&d);
break;
}
        push(&s, i);
        break;
    }
    case 'r':
    {
        j= pop(&s);
        if(j==-3)
        {
          break;
        }
        printf("%ld\n",j);
        break;
    }
    case 'p':
        {
            print_stack(&s);
            break;
        }
    case 's':
        return 0;
    default:
{printf("enter correct option\n");
        break;
  }
}scanf("%c",&d);
}

}

void push(struct stack* s,long int data)
{ long int i;
if(data<0|| data > 2147483648)
{printf("invalid input\n");
return;}
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
    temp1->next=NULL;
    temp1->data=data;
        temp1->next=s->head;
        s->head=temp1;
        return;


}
void print_stack(struct stack* s)
{
    struct Node* temp = s->head;
    if(s->head==NULL)
    {
        printf("Empty");
    }
    while(temp!= NULL)
    {
        printf("%ld ",temp->data);
        temp = temp ->next;
    }
    printf("\n");
    return ;
}
long int pop(struct stack* s)
{ long int i;
    struct Node* temp1 =s->head;
      if(s->head==NULL)
      {
          printf("empty\n");
          return -3;
      }i=temp1->data;
        s->head =temp1->next;

        free(temp1);
        return i;

}
