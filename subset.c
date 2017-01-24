#include <stdio.h>

int main(void) 
{
	int a[20],i,j;
	for(i=0;i<3;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
	    for(j=0;j<3;j++)
	    {
	        printf("%d",a[j]);  
	         if(i==0)
	        {
	            printf("\n");
	        }
	        if(i==1||i==2)
	        {
	            if((i+j)%2==0)
	            {
	                printf("\n");
	            }
	        }
	    }
	}
	return 0;
}
