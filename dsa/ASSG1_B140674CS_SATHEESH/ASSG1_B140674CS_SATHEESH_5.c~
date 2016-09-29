#include <stdio.h>
#include <stdlib.h>
void addition(float n,float m);
void subtraction(float n,float m);
void multipication(float n,float m);
void divison(float n,float m);

int main()
{float m,n;char i,j;
void (*ptr1)(float n,float m),(*ptr2)(float n,float m),(*ptr3)(float n,float m),(*ptr4)(float n,float m);
ptr1= &addition;
ptr2= &subtraction;
ptr3= &multipication;
ptr4= &divison;
printf("enter two numbers\n");
if(!(scanf("%f%f",&m,&n))){
printf("INVALID INPUT\n");
}else 
{
x:printf("\nenter: \n1:addition\n2:subtrction\n3:multiplication\n4:division\n5:exit\n");
scanf("%c",&j);
scanf("%c",&i);
if(i<'6' && i >'0')
{
switch (i)
{
case '1':
   {

    ptr1(m,n);goto x;
    break;}
case '2':
   {

    ptr2(m,n);goto x;
    break;}
case '3':
    ptr3(m,n);goto x;
    break;
case '4':
   {
       ptr4(m,n);goto x;
    break;}
case '5':
    {
    break;}
}}
else
{
    printf("enter correct option");goto x;
}
}}


void addition(float n,float m)
{
   printf("sum of two numbers is %g",n+m);

}
void subtraction(float n,float m)
{
   printf("subtraction of two numbers is %g",n-m);

}
void multipication(float n,float m)
{
   printf("product of two numbers is %g",n*m);

}
void divison(float n,float m)
{float p,q;
q=m+0.0;
p=n/q;
   printf("answer is %g",p);
}

