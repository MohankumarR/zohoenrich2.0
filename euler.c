#include <stdio.h>

int main(void)
{
	int a[23][23],i,j;
	a[0][0]=0;
	for(i=1;i<=6;i++)
	{
	    for(j=1;j<=i;j++)
	    {
	        if(j==1||i==j)
	        {
	            a[i][j-1]=1;
	        }
	        else
	        {
	            a[i][j-1]=((i-j+1)*a[i-1][j-2])+((j)*a[i-1][j-1]);
	        }
	        printf("%d\t",a[i][j-1]);
	    }
	    printf("\n");
	}
	return 0;
}

