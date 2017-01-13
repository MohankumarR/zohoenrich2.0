#include <stdio.h>
int pal(int a)
{
   int r,s=0;
   while(a>0)
   {
       r=a%10;
       s=s*10+r;
       a=a/10;
   }
   return(s);
}
int main(void) 
{
   int n,b;
   scanf("%d",&n);
   b=pal(n);
   while(n!=b)
   {
       n++;
       b=pal(n);
   }
   printf("%d",b);
   return 0;
} 
