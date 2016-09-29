#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char data;
    struct node* left;
    struct node* right;
};
struct node* head;
struct node* sath;
struct node* search(struct node* head1,char );
struct node* newnode(char);
struct node* insert(struct node* head1,char x)
{   struct node* temp1;
    if(head1!=NULL && ('a' <= head1->data) && (head1->data < 'z'))
    {
        return head1;
    }
    else if(head1==NULL)
    {
        return newnode(x);
    }

      else
        {
        head1->left=insert(head1->left,x);

      if(search(head1->left,x)==NULL)
    {
        head1->right=insert(head1->right,x);

    }}
     return head1;

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
{
    if(head1!=NULL)
    {
        printf("%c",head1->data);
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
        printf("%c",head1->data);
    }
}
void inorder(struct node* head1)
{
    if(head1!=NULL)

    {  if(head1->data == '-' || head1->data == '/' || head1->data == '^'||head1->data == '*'||head1->data == '+')
    {
        printf("(");
        } inorder(head1->left);
        printf("%c",head1->data);

        inorder(head1->right);
         if(head1->data == '-' || head1->data == '/' || head1->data == '^'||head1->data == '*'||head1->data == '+')
    {
        printf(")");
        }
    }
}
int i=0;
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
int main()
{ int w;
    char c[10000];
    int d,z;
    scanf("%s",c);
 for(w=0;w<strlen(c);w++)
   {  
        if(!('a' <= c[w] && c[w] <= 'z') &&  c[w] !='/' &&  c[w] !='*'  &&  c[w] !='^' &&  c[w] !='+' &&  c[w] !='-')
      {printf("INVALI INPUT\n");
     return 0;
       }
     
       }
head=tree(c);

          
            inorder(head);
printf("\n");
preorder(head);
            printf("\n");
             postorder(head);
            printf("\n");
}






