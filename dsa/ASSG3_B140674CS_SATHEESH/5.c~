#include <stdio.h>
#include <stdlib.h>
int m=0;
struct priority_queue
{
    int data;
    int pri;
};
struct priority_queue pq[10000];

void insert(struct priority_queue h[],int y,int x)
{ if( y<0 ||y>1073741824 || x<1 ||x>1073741824)
{printf("invalid input\n");
return;}
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
void get_min(struct priority_queue pq[])
{   if(m==0)
{
    printf("empty\n");
    return;
}
    printf("%d ",pq[1].data);
    printf("(%d)\n",pq[1].pri);
    return;
}
void extract_min(struct priority_queue pq[])
{  int i;
    if(m==0)
{
    printf("empty\n");
    return;
}
   struct priority_queue temp;
   temp=pq[1];
    pq[1]=pq[m];
    m=m-1;
    minheap(pq,1);
    printf("%d ",temp.data);
    printf("(%d)\n",temp.pri);
    return;
}
void decrease_priority(struct priority_queue h[],int a ,int b)
{if( a<0 ||a>1073741824 || b<1 ||b>1073741824)
{printf("invalid input\n");
return;}
    int i,j=0,l,p,temp;
    if(m==0)
    {
        printf("NO DATA\n");
        return;
    }
    for(i=1;i<m+1;i++)
    {  
        if(h[i].data==a)
        {   if(b>h[i].pri)
        {  printf("GIVEN PRIORITY MUST BE LESS THAN PREVIOUS \n");
            return;
        }
            h[i].pri=b;
            goto c;
        }
j++;
    }
    c:p=i;
if(j==m)
{printf("no data found\n");
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

int main()
{
char c,n;int i,j,k,l;
while(1)
{
scanf("%c",&c);

switch(c)
{ 
case 'a':
    {
     if(scanf("%d",&i)!=1)
    {
        printf("invalid input\n");
        scanf("%c",&n);scanf("%c",&n);scanf("%c",&n);
break;
    }
    if(scanf("%d",&j)!=1)
    {
        printf("invalid input\n");
          scanf("%c",&n); break;

    }
    insert(pq,i,j);
    break;

}
case 'g':
    {
        get_min(pq);
break;
    }
case 'd':
    {  if(scanf("%d",&i)!=1)
    {
        printf("invalid input\n");
        scanf("%c",&n);
  scanf("%c",&n); 
break;
    }
    if(scanf("%d",&j)!=1)
    {
        printf("invalid input\n");
          scanf("%c",&n);
break;
    }
        decrease_priority(pq,i,j);
break;
    }
case 'e':
    {
        extract_min(pq);
break;
    }
case 's':
    return 0;
default:
{  printf("enter correct option\n");
break;
}

}scanf("%c",&n);

}}

