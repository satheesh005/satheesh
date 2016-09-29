#include <stdio.h>
#include <stdlib.h>
long int queuefull();
long int queueempty();
long int MAX;
long int enquee(long int [],long int);
long int dequee(long int []);
long int print_queue(long int []);

long int rear = -1;
long int front = -1;
long int main()
{long int i,j,k,l,m;
char n,x;
if(scanf("%ld",&MAX)!=1)
{printf("invalid input\n");
return 0;}
MAX--;
if(MAX<0 || MAX >=99)
{printf("invalid input\n");
return 0;
}

long int quue[MAX];
y:scanf("%c",&x);
scanf("%c",&n);
switch (n)
{
case 'e':
    {
if(scanf("%ld",&i)!=1)
{printf("invalid input\n");
scanf("%c",&x);
goto y;}
if(MAX==0)
{printf("overflow\n");
return 0;}
     enquee(quue,i);
      goto y;
    }
case 'd':
    {   j= dequee(quue);
    if(j==-1)
    {
        goto y;
    }
    printf("%ld\n",j);
        goto y;
    }
case 'p':
    {

       print_queue(quue);goto y;
    }
    case 's':
    {
        return 0;
    }
    default :
{printf("correct  option\n");
        goto y;}}}



long int enquee(long int quue[],long int elem)
{
    if( queuefull()) printf("Overflow\n");
    else if(rear==MAX && front==-1 || rear+1==front)
    {
        printf("overflow\n");
    }
    else
    {
        if(front==-1)front=0;
        rear=(rear+1) % MAX;
        quue[rear]=elem;
    }
    return;
}
long int dequee(long int quue[])
{
    long int elem;
    if(queueempty()){ printf("empty\n");
    return(-1); }
    else
    {
        elem=quue[front];
        if(front==rear){ front=-1; rear=-1;}
        else
            front=(front+1) % MAX;
        return(elem);
    }
}
long int  queuefull()
{
    if( (front==rear+1) || (front == 0 && rear==MAX-1)) return 1;
    return 0;
}

long int queueempty()
{
    if(front== -1) return 1;
    return 0;
}

 long int print_queue(long int quue[])
{
    long int i;
    if(queueempty()) printf("Empty Queue");
    else
    {
        for(i=front;i!=rear;i=(i+1)%MAX)
            printf("%ld ",quue[i]);
        printf("%ld ",quue[i]);
    }
    printf("\n");
}



