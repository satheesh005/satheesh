#include <stdio.h>
#include <stdlib.h>


   long int m;
   long int n;


long int stfull(long int s[]) {
   if (n >= m - 1)
      return 1;
   else
      return 0;
}

void push(long int s[],long int z) {
if(z<0 || z>2147483648)
{printf("invalid input\n");
return;}   
n++;
   s[n] = z;
}

long int stempty(long int s[]) {
   if (n == -1)
      return 1;
   else
      return 0;
}

void print_stack(long int s[]) {
   long int i;
   if (stempty(s))
      printf("Empty");
   else {
      for (i = n; i >= 0; i--)
         printf("%ld ", s[i]);
   }
   printf("\n");
}
long int pop(long int s[]) {
   long int z;
   z = s[n];
   n--;
   return (z);
}


long int main() {
   long int z;char c,r;
   n = -1;
   if(scanf("%ld",&m)!=1)
{printf("invalid input\n");
return 0;}
if(m<1 ||m>1000)
{printf("invalid input\n");
return 0;
}
   long int s[m];
    
      y:scanf("%c",&r);
scanf("%c",&c);
      switch (c) {
      case 'a':
         if(scanf("%ld", &z)!=1)
{printf("invalid input\n");
scanf("%c",&r);
goto y;}
         if (stfull(s))
         {

            printf("overflow\n");
            goto y;
         }
         else
         {
            push(s,z);
            goto y;
         break;
         }
      case 'r':
         if (stempty(s))
         {
            printf("Empty\n");
            goto y;
         }

         else {
            z = pop(s);
            printf("%ld\n", z);
            goto y;
         }
         break;
      case 'p':
          {
         print_stack(s);
         goto y;
         break;
         }
      case 's':
         return 0;
      default:
{printf("enter correct option\n");
        goto y;}
      }

}
