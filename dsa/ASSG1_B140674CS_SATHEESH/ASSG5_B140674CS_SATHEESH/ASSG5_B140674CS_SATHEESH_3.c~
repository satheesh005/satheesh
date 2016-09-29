#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int number;
int n;
struct node
{
    int data;
    int weight;
    struct node* next;
};
struct hash{
 struct node* head;

};


struct hash hash[1000];


void insert1(struct hash *s,int l)
{
  struct node* temp=(struct node*)malloc(sizeof(struct node));
  if(s->head==NULL)
  {

     temp->data = l;
     temp->next=NULL;
     temp->weight=0;
     s->head=temp;
     return;
  }
  struct node* temp2=s->head;
  while(temp2->next!=NULL)
  {
      temp2=temp2->next;
  }
  temp->data=l;
  temp->weight=0;
  temp->next=NULL;
  temp2->next=temp;

}
void insert2(struct hash *s,int l,int t)
{ int i;
  struct node* temp ;

  struct node* temp2=s->head;
  for(i=0;i<t-1;i++)
  {
      temp2=temp2->next;
  }
  temp2->weight=l;


}
int m=0;
struct priority_queue
{
    int data;
    int pri;
};
struct priority_queue pq[10000];

void insert(struct priority_queue h[],int y,int x)
{ 
int l,p,temp,i;
    if(m==0)
    {
        h[1].data=y;
        h[1].pri=x;
        l=1;
        m++;
    }
    else{
        m++;
        h[m].data=y;
        h[m].pri=x;
        l=m;

        p=l;
        while(p/2!=0 &&h[p].pri <h[p/2].pri)
        {
            temp=h[p/2].pri;
            h[p/2].pri=x;
            h[p].pri=temp;
            temp=h[p/2].data;
            h[p/2].data=y;
            h[p].data=temp;
            p=p/2;
        }
       }

}
int isempty(struct priority_queue pq[])
{   if(m==0)
{
    
    return 1;
}return 0;
    printf("%d ",pq[1].data);
    printf("(%d)\n",pq[1].pri);
    return;
}
int extract_min(struct priority_queue pq[])
{  int i;
    if(m==0)
{
    return;
}
   struct priority_queue temp;
   temp=pq[1];
    pq[1]=pq[m];
    m=m-1;
    minheap(pq,1);
   
    return temp.data;
}
void decrease_priority(struct priority_queue h[],int a ,int b)
{
    int i,j=0,l,p,temp;
    if(m==0)
    {
        insert(pq,a,b);
        return;
    }
    for(i=1;i<m+1;i++)
    {  
        if(h[i].data==a)
        {   if(b>h[i].pri)
        {  
            return;
        }
            h[i].pri=b;
            goto c;
        }
j++;
    }
    c:p=i;
if(j==m)
{ insert(pq,a,b);
return;}
        while(p/2!=0 && h[p].pri <h[p/2].pri)
        {
            temp=h[p/2].pri;
            h[p/2].pri=h[p].pri;
            h[p].pri=temp;
            temp=h[p/2].data;
            h[p/2].data=h[p].data;
            h[p].data=temp;
            p=p/2;
        }

}


int minheap(struct priority_queue a[],int i)
{
    int c,j,k;struct priority_queue l;
    c=i;
    if(left(c)<=m)
    {
        if(a[left(c)].pri < a[i].pri)
            i=left(c);
    }
        if(right(c)<= m)
        {
            if(a[right(c)].pri < a[i].pri)
            {
                i=right(c);
            }


        }
        if(i!=c)
        { l=a[c];
        a[c]=a[i];
        a[i]=l;
        minheap(a,i);

        }

}
int left(int a)
{
    return 2*a;
}
int right(int a)
{
    return (2*a)+1;
}
void apsp(int x)
{int r,k,i;int count=0,count1=0;
int ab[n],bc[n];
  for(i=0;i<n;i++)
{bc[i]=1000000;}
    struct priority_queue q[1000];
    insert(q,x,0);
bc[x]=0;
    while(!isempty(q))
        {
           
             r=extract_min(q);
		//printf("%d\n",r);
    for(k=0;k<count;k++)
    {
        if(ab[k]==r)
        {
            goto z;
        }
    }
    //printf("%d %d \n",r,bc[r]);
    ab[count]=r;count++;
    
    struct node* temp = hash[r].head;
    while(temp!=NULL)
    {  if(bc[temp->data]>bc[r]+temp->weight)
          bc[temp->data]=bc[r]+temp->weight;
        insert(q,temp->data,bc[temp->data]);
	//printf("          %d",temp->wei); 
        temp=temp->next;
    }
      z:for(k=0;k<3;k++)
      {

      }

    }
for(i=0;i<n;i++)
{ 
   if(bc[i]==1000000)
{printf("INF");
}
else
printf("%d  ",bc[i]);
}}
void sssp(int x,int y)
{int r,k,i;int count=0,count1=0;
int ab[n],bc[n];
  for(i=0;i<n;i++)
{bc[i]=1000000;}
    struct priority_queue q[1000];
    insert(q,x,0);
bc[x]=0;
    while(!isempty(q))
        {
           
             r=extract_min(q);
		//printf("%d\n",r);
    for(k=0;k<count;k++)
    {
        if(ab[k]==r)
        {
            goto z;
        }
    }
    //printf("%d %d \n",r,bc[r]);
    ab[count]=r;count++;
    
    struct node* temp = hash[r].head;
	
    while(temp!=NULL)
    {  if(bc[temp->data]>bc[r]+temp->weight)
          bc[temp->data]=bc[r]+temp->weight;
        insert(q,temp->data,bc[temp->data]);
	//printf("          %d",temp->wei); 
        temp=temp->next;
    }
      z:for(k=0;k<3;k++)
      {

      }

    }
  if(bc[y]==1000000)
{printf("UNREACHABLE\n");
}
else
printf("%d\n",bc[y]);
}


int main()
{ int i,l=0,j=0,o,p,e=0,t=-3;char c,arr[1000];float x;
    for(i=0;i<1000;i++)
    {
        hash[i].head=NULL;
    }
    scanf("%d",&n);
if(n>1000 || n<1)
{printf("INVALID INPUT\n");
return 0;}
    scanf("%c",&c);
for(i=0;i<n;i++)
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
if(p<0 || p>999)
{printf("INVALID INNPUT\n");return 0;}
if(p<=t)
{printf("INVALID INPUT\n");
return 0;}t=p;
        insert1(&hash[i],p);
        l=0;
        if(c!='\n') scanf("%c",&c);
       }

    }t=-3;
}
l=0;
for(i=0;i<n;i++)
{
    scanf("%c",&c);
    if(c=='\n')
    {
       
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
e++; 
  if(p<0 || p>10000)
{printf("INVALID INPUT\n");
return 0;}

        insert2(&hash[i],p,e);
        l=0;
        if(c!='\n') scanf("%c",&c);
       }

    }e=0;
}
l=0;
while(1)
{   scanf("%s",arr);


    if(strcmp(arr,"apsp")==0)
    {
       scanf("%d",&i);
     if(i<0|| i>999)
{printf("INVALID INPUT\n");
return 0;}
       apsp(i);printf("\n");
    }
if(strcmp(arr,"sssp")==0)
    {
       scanf("%d%d",&i,&j);
if(i<0|| i>999|| j<0 || j>999)
{printf("INVALID INPUT\n");
return 0;}
       sssp(i,j);
    }
if(strcmp(arr,"stop")==0)
    {
       return 0;
    }
    

}

}

