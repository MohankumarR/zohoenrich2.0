#include <stdio.h>

int main(void) 
{
	int a[20],i,n,k,l,h,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	l=0;
	h=n-1;
	m=(l+h)/2;
	while(a[m]!=k)
	{
	    if(a[m]>k)
	    {
	        l=l;
	        h=m;
	    }
	    else
	    {
	        l=m;
	        h=h;
	    }
	    m=(l+h)/2;
	}
	printf("%d",m);
	return 0;
}
