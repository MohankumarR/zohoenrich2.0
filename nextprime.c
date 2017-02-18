#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	n=n/6;
	n=n+1;
	n=n*6;
	n=n-1;
	for(i=n;i<=n+2;i=i+2)
	{
			j=5;
			while(j<i)
			{
				if(i%j==0)
				{
					break;
				}
				j=j+2;
			}
			if(i==j)
			{
				break;
			}			
	}
	printf("%d",i);
}
