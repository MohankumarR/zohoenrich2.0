#include <stdio.h>
int prime(int a)
{
    int i=0,j;
    for(j=2;j<=a;j++)
    {
        if(a%j==0)
        {
            i++;
        }
    }
    return(i);
}
int main(void)
{
    int n,b;
    scanf("%d",&n);
    n++;
    b=prime(n);
    while(b!=1)
    {
        n++;
        b=prime(n);
    }
    printf("%d",n);
	return 0;
}
