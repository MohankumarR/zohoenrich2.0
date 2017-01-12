#include <stdio.h>

int main(void)
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        printf("%d\t",s);
    }
	return 0;
}
