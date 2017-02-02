#include <stdio.h>

int main(void) 
{
	int a[20],i,k;
	for(i=0;i<4;i++)
	{
	    scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<4;i++)
	{
	    if(a[i]==k)
	    {
	        printf("%d",i);
	        break;
	    }
	}
	return 0;
}
