#include<stdio.h>
int find(int array[],int size,int key)
{
	int j,b=0;
	for(j=0;j<size;j++)
	{
		if(array[j]==key)
		{
			b++;
		}
	}
	return(b);
}
int main()
{
	int a[10],i,n,k,u;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	scanf("%d",&k);
	u=find(a,n,k);
	printf("%d",u);
}
