#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int number (int);
int main()
{
    int i,j,l,n;
    printf("enter the index of the matrix\n ");
    scanf("%d",&n);int a[n][n];float b[n][n];
    if(n==0)
    {
        printf("matrix index should not be zero");
    }
    else if (n>100)
    {
        printf("matrix order not in the given range");
    }
    else{
printf("enter the elements in the matrix\n");
    if(n==1){
        scanf("%d",&a[0][0]);
        printf("\n%d\n",a[0][0]);
    }

    else
        {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<1&&j<1)
            {
              b[i][j]=(a[i][j]+a[i+1][j+1]+a[i][j+1]+a[i+1][j])/4.0;

            }
            else if(i==0 && j< n-1 && j>0)
                {
                   b[i][j]=( a[i][j]+a[i+1][j]+a[i][j-1]+a[i+1][j+1]+a[i+1][j-1]+a[i][j+1] )/6.0;

                }
                else if(i > 0 && i < n-1 && j > 0 && j < n-1)
                    {
                        b[i][j]=( a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i+1][j+1]+a[i-1][j+1]+a[i-1][j-1]+a[i][j-1]+a[i+1][j-1] )/9.0;

                    }
                    else if(j== n-1 && i > 0 && i<n-1)
                        {
                          b[i][j]=(a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j-1]+a[i+1][j-1]+a[i-1][j-1] )/6.0;
                        }
                        else if(i==0 && j==n-1)
                            {
                                b[i][j]=(a[i][j]+a[i+1][j-1]+a[i][j-1]+a[i+1][j])/4.0;
                            }
                            else if(i==n-1  && j==n-1)
                                {
                                    b[i][j]=(a[i][j]+a[i-1][j-1]+a[i][j-1]+a[i-1][j])/4.0;
                                }
                              else if(j==0 && i==n-1)
                                {
                                b[i][j]=(a[i][j]+a[i-1][j+1]+a[i][j+1]+a[i-1][j])/4.0;
                                }else if(j==0 && i>0 && i<n-1){
                                    b[i][j]=(a[i][j]+a[i+1][j+1]+a[i][j+1]+a[i+1][j]+a[i-1][j]+a[i-1][j+1] )/6.0;
                                }
                                else if(i==n-1 && j>0 && j<n-1)
                                    { b[i][j]=(a[i][j]+a[i-1][j+1]+a[i][j+1]+a[i-1][j]+a[i-1][j-1]+a[i][j-1] )/6.0;
                                }
        }}

     printf("output matrix is\n");
     for(j=0;j<n;j++)
    {
        for(l=0;l<n;l++)
        {
            printf("%d ",(int )(roundf(b[j][l])));

        }printf("\n");
}}}
return 0;
}
