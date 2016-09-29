#include <stdio.h>
#include <stdlib.h>
int size,g=0;
void search(int [],int );
void insert(int [],int );
int main()
{ int i,j,k;char c;float d;
    if(scanf("%f",&d)!=1 || d<=0)
            {
                printf("INVALI INPUT\n");
                return 0;
            }
            size=d;
            if(size-d<0)
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
 {  scanf("%c",&c);
     scanf("%c",&c);
     switch(c)
     {
     case 'i':
        {
            if(scanf("%f",&d)!=1)
            {
                printf("INVALI INPUT\n");
                return 0;
            }
            i=d;
            if(i-d<0)
            {
                printf("INVALID INPUT\n");
                return 0;
            }

            insert(array,i);
            break;
        }
     case 'f':
        {
           if(scanf("%f",&d)!=1)
            {
                printf("INVALI INPUT\n");
                return 0;
            }
            i=d;
            if(i-d<0)
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
int hash(int k)
{
    int j;
    if(k>=0)
    {
    j=k%size;
    return j;
    }
    else{
        j=((k%size)+size)%size;
        return j;
    }
}
int hash1(int k)
{ int j;double e,f;
if(k>=0)
{
    e=0.6180339887*k;
    j=0.6180339887*k;
    f=e-j;
    j=f*size;
    return j;
}
else{
     e=0.6180339887*k;
    j=0.6180339887*k;
    f=e-j+1;
    j=(f*size)+size;
    return j%size;

}
}
void insert(int a[],int k)
{
   int i,j,m;
   i=size;j=hash(k);
   
   for(m=0;m<i;m++)
   {  printf("%d ",j);
       if(a[j]==-123456)
       { g++;
       a[j]=k;
       printf("\n");
       return;
      }
      j=(hash(k)+((m+1)*hash1(k)))%size;

   }
if(m==i)
   {
       printf("CANNOT INSERT\n");
   return;
   }

}
void search(int a[],int k)
{
    int i,j,m;
   i=size;j=hash(k);
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
     j=(hash(k)+((m+1)*hash1(k)))%size;
    }
   printf("NOT FOUND\n");
   return;
}


