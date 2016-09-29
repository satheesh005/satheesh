#include <stdio.h>
#include <stdlib.h>

void insert(int ,int);
void print();

struct Node
{
    int data;
     struct Node* next;

};
int k_last(struct Node*,int);
struct Node* head;
int main()
{ head =NULL;
int j,k,l,i,m,n;
if(scanf("%d",&n)!=1 || n<1)
{
    printf("invalid input\n");
    return 0;
}
   for(i=1;i<=n;i++)
   {
       if(scanf("%d",&j)!=1 || j<-1073741824 ||j>1073741824)
       {
           printf("invalid input\n");
           return 0;
       }
       insert(j,i);
   }
   if(scanf("%d",&k)!=1 || k>n ||k<1)
   {
       printf("invalid input:%d > %d\n",k,n);
       return 0;
   }
   m=k_last(head,n-k+1);
   printf("%d",m);

}
void insert(int data , int n)
{ int i;
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
    temp1->next=NULL;
    temp1->data=data;
    if(n==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
   struct Node* temp2 =head;
    for(i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void print()
{
    struct Node* temp = head;
    while(temp!= NULL)
    {
        printf("%d ",temp->data);
        temp = temp ->next;
    }
}
int k_last(struct Node* head,int n)
{  int a=0;
    struct Node* temp1 = head;
    while(temp1!=NULL)
    {   a++;
        if(a == n )
        {
            return temp1->data;
        }
        temp1=temp1->next;
    }
    return 0;

}
