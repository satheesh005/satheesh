#include <stdio.h>
#include <stdlib.h>
int size,g=0;
void search(int [],int );
void insert(int [],int );
int main()
{ int i,j,k;float m;char d;
    if(!scanf("%f",&m))
    {
        printf("INVALID INPUT\n");
        return 0;
    }
    size=m;
    if(m<=0)
    {
        printf("INVALID INPUT\n");
        return 0;
    }
    if(size-m<0)
    {
        printf("INVALID INPUT\n");
        return 0;
    }
    int array[size];
    for(i=0;i<size;i++)
    {
        array[i]=-123456;
    }
 while(1)
 {  scanf("%c",&d);
     scanf("%c",&d);
     switch(d)
     {
     case 'i':
        {
            if(scanf("%f",&m)!=1)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
            i=m;
            if(i-m<0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }

            insert(array,i);
            break;
        }
     case 'f':
        {
            if(scanf("%f",&m)!=1 )
            {
                printf("INVALID INPUT\n");
                return 0;
            }
            i=m;
            if(i-m<0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }
            search(array,i);
            break;
        }
     case 's':
        {
            return 0;
        }
     default :
        {
            printf("INVALID INPUT\n");
            break;
        }
     }

 }

}
int hash(int k,int m)
{
    int j;
    if(k>=0)
    {
    j=(k+m*m)%size;
    return j;
    }
    else
    {
        k=(k%size)+size;
        j=(k + ((m*m)%size))%size;
        return j;
    }
}
void insert(int a[],int k)
{
   int i,j,m,v=0;
   i=size;j=hash(k,0);

   c:for(m=0;m<i;m++)
   {  printf("%d ",j);
       if(a[j]==-123456)
       { g++;
       a[j]=k;
       printf("\n");
       return;
      }
      j=hash(k,m+1);

   }
   if(m==i)
   {
       printf("CANNOT INSERT\n");
   }

}
void search(int a[],int k)
{
    int i,j,m;
   i=size;j=hash(k,0);
   for(m=0;m<i;m++)
   {  if(a[j]==-123456)
       {
         printf("%d ",j);
         printf("NOT FOUND\n");
         return;
       }
        printf("%d ",j);
       if(a[j]==k && a[j]!=-123456)
       {
       printf("FOUND\n");
       return;
      }
      j=hash(k,m+1);
    }
   printf("NOT FOUND\n");
   return;
}


