#include <stdio.h>(

int main(void) 
{
	int a[10][10],i,k=1,j=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i=i+2)
	{
	    while(j<n)
	    {
	        a[i][j]=k++;
	        j++;
	    }
	    j--;
	    while(j>=0)
	    {
	      a[i+1][j]=k++;
	      j--;
	    }
	    j++;
	    
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        printf("%d ",a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
