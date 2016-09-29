#include <stdio.h>
#include <stdlib.h>
long long int fun(long long int);

int main()
{
long long int i,j=0;
printf("enter the number");
scanf("%lld",&i);
if(i<=2147483648 && i>=0)
{

j=fun(i);
printf("binary representations of %lld contains %lld  1's\n",i,j);
}
else{
    printf("enter the valid input");
}}

long long int fun( long long int i)
{
    long long int j,k=0;
if(i==0)
return 0;
else{
        j=i%2;
    i=i/2;
    if (j==1)
    return 1+fun(i);
else{return fun(i);}}}
