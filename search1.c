#include <stdio.h>

int main(void) 
{
	int a[20],b[20],i,j=0,k;
	for(i=0;i<9;i++)
	{
	    scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<9;i++)
	{
	    if(a[i]==k)
	    {
	        b[j]=i;
	        j++;
	    }
	}
	for(i=0;i<j;i++)
	{
	    printf("%d,",b[i]);
	}
	return 0;
}

