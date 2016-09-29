#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0,j,k=0,l,n,p=0,q=0,r=0;char a[100],b[100];
    printf("enter the strings");
    gets(a);
    gets(b);
    n=strlen(a);
for(p=0;p<n;p++)
{
    if(a[p] >= 'a' && a[p]<= 'z')
    {
        q=q+1;
    }
}
for(p=0;p<strlen(b);p++)
{
    if(b[p] >= 'a' && b[p]<='z')
    {
        r=r+1;
    }
}
if(q==n && r == strlen(b))
{
if(strlen(a)!=strlen(b))
{
    printf("no");
}
    else
    {
    x:for(l=i;l<n;l++)
    {

        for(j=0;j<n;j++)
        {
            if(a[l]==b[j])
            {
                k=k+1;
i=i+1;b[j]= '\0';
                goto x;
            }
        }
    }

    if(k==n)
        { printf("yes");
    }
    else
    {
        printf("no");
}}}
else
{
    printf("invalid input");
}
}
