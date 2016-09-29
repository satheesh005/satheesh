#include <stdio.h>
#include <stdlib.h>
void insert(int ,int);
void delete(int);
int u,e,d,v,g;
void print();
struct Node
{
    int data;
     struct Node* next;

};
struct Node* head;
void swap(struct Node*,int , int);
int main()
{ head =NULL;
int j,k,l,i,m,n;
if(scanf("%d",&n)!=1 || n<2)
{
    printf("invalid input\n");
    return 0;
}
u=n;
   for(i=1;i<=n;i++)
   {
       if(scanf("%d",&j)!=1 || j<-1073741824 || j>1073741824)
       {
           printf("invalid input\n");
           return 0;
       }
       insert(j,i);
   }
   if(scanf("%d",&n)!=1)
   {
       printf("invalid input\n");
       return 0;
   }
   if(scanf("%d",&m)!=1)
   {
       printf("invalid input\n");
       return 0;
   }
   swap(head,m,n);
   if(v==u|| g==u)
   {
       return 0;
   }
   print();

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
void delete(int n)
{ int i;
    struct Node* temp1 =head;
    if(n==1)
    {
        head =temp1->next;
        free(temp1);
        return;
    }
    else{
     for(i=0;i<n-2;i++)
     {
         temp1=temp1->next;
         }
      struct Node* temp2 =temp1->next;
      temp1->next = temp2->next;
      free(temp2);

    }
}
void swap(struct Node* head,int x , int y)
{   if(x==y)
{
    return;
}

   else{
    int a=0,d=0, e=0,c=0;
    struct Node* temp1 = head;
    while(temp1!=NULL)
    { a++;
        if(temp1->data == x)
        {
            goto z;

        }
        d++;
        temp1 = temp1->next;
    }
    z: v=d;
        if(d==u)
    {
        printf("%d NOT FOUND\n",x);
        return;
    }
        insert(y,a);
        delete(a+1);
    struct Node* temp2 = head;
    while(temp2!=NULL )
    { c++;
        if(temp2->data == y && c != a)
        {
            goto b;
        }
        e++;
        temp2 = temp2->next;
    }
    b:g=e;
    if(e==u)
    {
        printf("%d NOT FOUND\n",y);
        return;
    }
         insert(x,c);
    delete(c+1);
return;
}}
