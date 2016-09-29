#include <stdio.h>
#include <stdlib.h>
int p=-2,q=-3,f=0;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* search(struct node* ,int );
struct node* insert(struct node* ,int );
struct node* delete(struct node* ,int );
struct node* newnode(int );
struct node* head=NULL;
struct node *k,*temp1,*temp8;

struct node* search(struct node* head1,int x)
{struct node* temp1;
    struct node* temp = head1;
    while(head1!=NULL)
    {
        if(head1->data==x)
        {
        return head1;
        }
       else if(head1->data < x)
        {
          temp1=search(head1->right,x);
          return temp1;
        }
        else{
           temp1= search(head1->left,x);
            return temp1;
        }
    }
    return NULL ;
}
struct node* insert(struct node* head1,int x)
{
    if(head1==NULL)
    {
        return newnode(x);
    }
      if(head1->data < x)
    {
        head1->right=insert(head1->right,x);

    }
    else{
        head1->left=insert(head1->left,x);

    } return head1;

}


struct node* newnode(int x)
{struct node* temp =  (struct node *)malloc(sizeof(struct node));
        temp->data=x;
        temp->left=NULL;
        temp->right=NULL;
    return temp;
}
void findmin(struct node* head1)
{
    struct node* temp= head1;
    if(temp==NULL)
    {
        printf("NIL\n");
        return;
    }
    while(temp->left!=NULL)
    {
       temp=temp->left;
    }
     printf("%d\n",temp->data);
        return;
}

void findmax(struct node* head1)
{
    struct node* temp= head1;
    if(temp==NULL)
    {
        printf("NIL\n");
        return;
    }
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    printf("%d\n",temp->data);
        return;

}
void predeccesor(struct node* head1,int x)
{
   struct node* temp=head1;
   struct node* temp1=head;
if(head1!=NULL )
{
    if(head1->data==x && head1->left!=NULL)
   {
    struct node* m =head1->left;
      while(m->right!=NULL)
      {
          m=m->right;
      }
    p=m->data;
      return;
   }
   else if(head1->data==x && head1->left==NULL)
   {
       return;
   }
   else if(temp->data <x)
    {    p=head1->data;
       predeccesor(temp->right,x);
       return;
   }
   else{

    predeccesor(temp->left,x);
    return;
   }

}}
void succesor(struct node* head1,int x)
{
   if(head1!=NULL)
    {
   struct node* temp=head1;

    if(head1->data==x && head1->right!=NULL)
   {struct node* m = head1->right;

      while(m->left!=NULL)
      {
          m=m->left;
      }
    q=m->data;
   }
   else if(head1->data==x && head1->right==NULL)
   {
       return;
   }
   else if(head1->data <x)
    {
       succesor(head1->right,x);
   }
   else{
        q=head1->data;
    succesor(head1->left,x);

   }
   return;
}}

struct node* delete(struct node* head1,int x)
{ if(head1==NULL)
{
 return NULL;
}
    struct node* temp=head1;
    struct node *temp1,*temp2;

    if(head1->data==x)
    {    if(head1->left==NULL)
        {
            temp1=head1->right;
            free(head1);
            return temp1;
        }
        else if(head1->right==NULL)
        {
            temp1=head1->left;
            free(head1);
            return temp1;
        }
         else
        {
            succesor(head1,x);
            head1->data=q;
           head1->right= delete(head1->right,q);
        }

    }
    else if(head1->data < x)
    {
       head1->right= delete(head1->right,x);

    }
    else if(head1->data > x)
    {
        head1->left = delete(head1->left,x);
    }
    return head1;
}

void inorder(struct node* head1)
{
    if(head1!=NULL)
    {
        inorder(head1->left);
        printf("%d ",head1->data);
        inorder(head1->right);
    }
}
void preorder(struct node* head1)
{
    if(head1!=NULL)
    {
         printf("%d ",head1->data);
        preorder(head1->left);

        preorder(head1->right);
    }
}
void postorder(struct node* head1)
{
    if(head1!=NULL)
    {
         postorder(head1->left);

        postorder(head1->right);
        printf("%d ",head1->data);
    }
}
int main()
{
int d,r;
char c[10],e;float w;

while(1)
{
    scanf("%s",c);

    if(strcmp(c,"insr")==0)
        {
            if(scanf("%f",&w)!=1 || w < 0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
            d=w;
            if(d-w <0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
     temp8=search(head,d);
  if(temp8!=NULL)
{  printf("INVALID INPUT\n");
return 0;
}
        head=insert(head,d);


       }
    else if(strcmp(c,"srch")==0)
        {
        if(scanf("%f",&w)!=1 || w<0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
            d=w;
            if(d-w <0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
            k=search(head,d);
           if(k!=NULL)
           {
               printf("FOUND\n");
           }
           else{
            printf("NOT FOUND\n");
           }

        }
    else if(strcmp(c,"minm")==0)
        {
            findmin(head);

        }
    else if(strcmp(c,"maxm")==0)
        {
            findmax(head);

        }
    else if(strcmp(c,"succ")==0)
        {
         if(scanf("%f",&w)!=1 || w < 0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
            d=w;
            if(d-w <0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
         if(head==NULL)
         {
             printf("NOT FOUND\n");
         }
         else{
      temp8=search(head,d);
       if(temp8==NULL)
    {  printf("NOT FOUND\n");
          }
  else
    {
        q=-5;
         r=q;
        succesor(head,d);
        if(r==q)
        {
            printf("NIL\n");
        }
        else
        {
        printf("%d\n",q);
        }
        }}}
    else if(strcmp(c,"pred")==0)
        {
         if(scanf("%f",&w)!=1 || w < 0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
            d=w;
            if(d-w <0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
          if(head==NULL)
         {
             printf("NOT FOUND\n");
         }
         else{
  temp8=search(head,d);
if(temp8==NULL)
{printf("NOT FOUND\n");
}
else
{
            p=-5;
         f=p;
        predeccesor(head,d);
        {
            if(f==p)
            {
                printf("NIL\n");

            }
            else{
                printf("%d\n",p);
            }
        }}
        }}
    else if(strcmp(c,"delt")==0)
        {
         if(scanf("%f",&w)!=1 || w <0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
            d=w;
            if(d-w <0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
         temp1=head;
         if(temp1->left==NULL && temp1->right ==NULL && temp1->data ==d)
         {
             head=temp1->left;
             free(temp1);

         }
         else{
        head=delete(head,d);
         }}


    else if(strcmp(c,"inor")==0)
        {
            inorder(head);
            printf("\n");
        }
    else if(strcmp(c,"prer")==0)
        {
            preorder(head);
            printf("\n");
        }
        else if(strcmp(c,"post")==0)
        {
            postorder(head);
            printf("\n");
        }
        else if(strcmp(c,"stop")==0)
            {
                break;
            }
    else{
        printf("INVALID INPUT\n");

}scanf("%c",&e);
}}

























