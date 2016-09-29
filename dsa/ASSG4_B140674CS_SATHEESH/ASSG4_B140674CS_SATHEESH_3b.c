#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char data;
    struct node* left;
    struct node* right;
};
struct Node
{
    char data;
    struct node* ne;
     struct Node* next;

};
struct stack
{
    struct Node* head;
};

void insert1(struct stack*,struct node*);
struct node* pop(struct stack*);
void print(struct stack*);
int i=0;
struct node* head;
struct node* sath;
struct node* search(struct node* head1,char );
struct node* newnode(char);
void inorder1(struct node* );
int notcharecter(char);
void insert1(struct stack* s, struct node* head1)
{ int i;char data=head1->data;
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
    temp1->data=data;
    temp1->ne=head1;
        temp1->next=s->head;
        s->head=temp1;
        return;


}

struct node* pop(struct stack* s)
{
    struct Node* temp1 =s->head;
      if(s->head==NULL)
      {
          return NULL;
      }
        s->head =temp1->next;


        return temp1->ne;
}


int notcharecter(char c)
{
    if(97 <= c && c <= 122)
        return 0;
    return 1;
}
struct node* tree(char *d)
{
    int j,k,l;
    if(i<strlen(d))
    {
        struct node* temp =newnode(d[i]);
        if(notcharecter(d[i]))
           {
               i++;
                temp->left=tree(d);
                i++;
        temp->right=tree(d);

             return temp;
           }
           return temp;
    }
    return NULL;
}
struct node* search(struct node* head1,char x)
{struct node* temp1;
    struct node* temp = head1;
    while(head1!=NULL)
    {
        if(head1->data==x)
        {
        return head1;
        }
       else
       {
          temp1=search(head1->right,x);
         if(temp1==NULL)
         {

           temp1= search(head1->left,x);
            return temp1;
         }
    return temp1;}
    }
    return NULL ;
}

struct node* newnode(char x)
{struct node* temp =  (struct node *)malloc(sizeof(struct node));
        temp->data=x;
        temp->left=NULL;
        temp->right=NULL;
    return temp;
}
void preorder(struct node* head1)
{ int i;struct node* temp;struct stack s;struct Node *p;s.head=NULL;
    if(head1!=NULL)
    {
        insert1(&s,head1);
        while(s.head!=NULL)
        {
            temp=pop(&s);
            printf("%c",temp->data);
            if(temp->right!=NULL)
            {
            insert1(&s,temp->right);
            }
             if(temp->left!=NULL)
            {
            insert1(&s,temp->left);
            }

        }

    }
}
void postorder(struct node* head1)
{
    struct node* temp;
    struct stack s1,s2;s1.head=NULL;s2.head=NULL;
    if(head1==NULL)
    {
        return;
    }
    insert1(&s1,head1);
        while(s1.head!=NULL)
        {
            temp=pop(&s1);
            insert1(&s2,temp);
            if(temp->left!=NULL)
            {
                insert1(&s1,temp->left);
            }
            if(temp->right!=NULL)
            {
                insert1(&s1,temp->right);
            }
        }
    while(s2.head!=NULL)
    {   temp=pop(&s2);
        printf("%c",temp->data);

    }
}


void inorder1(struct node* head1)
{
    if(head1!=NULL)
    {
        int i=0;struct stack s;s.head=NULL;struct node* temp =head1,*previous=NULL;
        do
        {
            while(temp!=NULL)
            {
                insert1(&s,temp);

                 if(i>0)
            {
                printf("(");
            }
            i++;temp=temp->left;
            }
            while(temp==NULL && s.head!=NULL)
            {
                temp=s.head->ne;

                if(temp->right==NULL || temp->right== previous)
                {
                    if(temp->right==NULL)
                    {
                        printf("%c",temp->data);

                    }
                    else{
                        printf(")");

                    }
                    temp=pop(&s);
                    previous=temp;
                    temp=NULL;

                }
                else{

                    printf("%c",temp->data);
                    temp=temp->right;
                }


            }
            i=0;
        }while(s.head!=NULL);



    }
}

int main()
{
int w;
    char c,string[100];
    int d;
   scanf("%s",string);
   for(w=0;w<strlen(string);w++)
   {  
        if(!('a' <= string[w] && string[w] <= 'z') &&  string[w] !='/' &&  string[w] !='*'  &&  string[w] !='^' &&  string[w] !='+' &&  string[w] !='-')
      {printf("INVALI INPUT\n");
     return 0;
       }
     
       }
   head=tree(string);
  
       inorder1(head);
            printf("\n");
          
            preorder(head);
            printf("\n");
    
            postorder(head);
            printf("\n");

}

