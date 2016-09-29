#include <stdio.h>
#include <stdlib.h>
int z=0,r=0,p=0,a=0;
struct node* findset3(int x);
struct node* findset4(int x);

struct hash10
{
    struct node* next;
};
struct node
{
    int data;
    int rank;
    struct node* next1;
};
struct node* node1;
struct hash10 hash[10000],hash1[10000],hash4[10000],hash3[10000];


int findset(int x)
{z++;
  if(hash[x].next==NULL)
{
    return -1;
}
    if(hash[x].next==hash[x].next->next1)
    {
        return x;
    }
    else
    {  struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp=hash[x].next->next1;

        return findset(temp->data);
    }
}

int uni(int x,int y)
{  int b,c;
 c=findset(x);b=findset(y);

   if(c==-1 || b==-1)
   {
       return -1;
   }
   if(c==b)
   {
       return c;
   }


  if(hash[c].next->rank < hash[b].next->rank)
  {
      hash[c].next->next1=hash[b].next->next1;
      return  b;
  }
  else if(hash[c].next->rank > hash[b].next->rank)
  {
      hash[b].next->next1=hash[c].next->next1;
      return c;
  }
  else{
    hash[b].next->next1=hash[c].next->next1;
    hash[c].next->rank++;
    return c;
  }


}
int uni4(int x,int y)
{  int b,c;struct node* temp10,*temp11;
 temp10=findset4(x);temp11=findset4(y);
b=temp11->data;c=temp10->data;
   if(c==-1 || b==-1)
   {
       return -1;
   }
   if(c==b)
   {
       return c;
   }


  if(hash4[c].next->rank < hash4[b].next->rank)
  {
      hash4[c].next->next1=hash4[b].next->next1;
      return  b;
  }
  else if(hash4[c].next->rank > hash4[b].next->rank)
  {
      hash4[b].next->next1=hash4[c].next->next1;
      return c;
  }
  else{
    hash4[b].next->next1=hash4[c].next->next1;
    hash4[c].next->rank++;
    return c;
  }


}
struct node* makeset(int x)
{struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->rank=0;
temp->next1=temp;
return temp;
}
struct node* findset4(int x)
{ a++;

    if(hash4[x].next==hash4[x].next->next1)
    {
        return hash4[x].next->next1;
    }
    else
    {

        hash4[x].next->next1=findset4(hash4[x].next->next1->data);
        return hash4[x].next->next1;
    }
}

int findset1(int x)
{ r++;
 if(hash1[x].next==NULL)
{
    return -1;
}
    if(hash1[x].next==hash1[x].next->next1)
    {
        return x;
    }
    else
    {  struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp=hash1[x].next->next1;

        return findset1(temp->data);
    }
}

int uni1(int x,int y)
{  int e,f;
    e=findset1(x);f=findset1(y);
   if(e==-1 || f==-1)
   {
       return -1;
   }
   if(e==f)
   {
       return e;
   }

   hash1[f].next->next1=hash1[e].next->next1;
   return e;

}
int uni3(int x,int y)
{  int e,f;
struct node* temp5,*temp6;
    temp5=findset3(x);temp6=findset3(y);
    e=temp5->data;f=temp6->data;
   if(e==-1 || f==-1)
   {
       return -1;
   }
   if(e==f)
   {
       return e;
   }

   hash3[f].next->next1=hash3[e].next->next1;
   return e;

}

struct node* findset3(int x)
{ p++;

    if(hash3[x].next==hash3[x].next->next1)
    {
        return hash3[x].next->next1;
    }
    else
    {

        hash3[x].next->next1=findset3(hash3[x].next->next1->data);
        return hash3[x].next->next1;
    }
}


int main()
{char c,d;
int i,j,k,l,m,n,o,t,g;
for(i=0;i<=10000;i++)
{
    hash[i].next=NULL;
}
while(1){
        scanf("%c",&d);
switch(d)
{ scanf("%c",&d);
case 'm':
    {   scanf("%d",&k);
if(k<0 || k>10000)
{printf("INVALID INPUT\n");return 0;}
        if(hash[k].next!=NULL)
{printf("PRESENT\n");
break;}
        struct node* temp=(struct node*) malloc(sizeof(struct node));
        temp->data=k;
        temp->rank=0;
        temp->next1=temp;
       hash[k].next=temp;
        struct node* temp1=(struct node*) malloc(sizeof(struct node));
        temp1->data=k;
        temp1->next1=temp1;

        hash1[k].next=temp1;
                struct node* temp2=(struct node*) malloc(sizeof(struct node));
        temp2->data=k;
        temp2->next1=temp2;

        hash3[k].next=temp2;
 struct node* temp3=(struct node*) malloc(sizeof(struct node));
        temp3->data=k;
        temp3->rank=0;
        temp3->next1=temp3;
       hash4[k].next=temp3;
printf("%d\n",k);
        break;
    }
case 'f':
    {
        scanf("%d",&k);
if(k<0 || k>10000)
{printf("INVALID INPUT\n");return 0;}
        struct node* temp7,*temp6;t=findset1(k);
  if(t==-1)
{ printf("NOTFOUND\n");
break;}
        temp7=findset3(k);
        temp6=findset4(k);
        printf("%d %d %d %d\n",t,findset(k),temp7->data,temp6->data);
        break;
    }
case 'u':
    {
        scanf("%d",&i);
        scanf("%d",&j);
if(i<0 || i>10000 || j<0 || j>10000)
{printf("INVALID INPUT\n");return 0;} g=uni(i,j);
if(g==-1)
{printf("ERROR\n");
break;}

        printf("%d %d %d %d\n",uni1(i,j),g,uni3(i,j),uni4(i,j));
        break ;
    }
case 's':
{
printf("%d %d %d %d\n",r,z,p,a);
return 0;
    }

}scanf("%c",&d);
}
}

