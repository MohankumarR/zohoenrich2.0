#include <stdio.h>

int main(void) 
{
	int i,j;
	for(i=0;i<3;i++)
	{
	    for(j=1;j<=3;j++)
	    {
	        if(i==0)
	        {
	            printf("%d\n",j);
	        }
	        else if(i==1)
	        {
	            if(j==3)
	            {
	                printf("%d,%d\n",i+1,j);
	            }
	            else
	            {
	                printf("%d,%d\n",i,j);
	            }
	        }
	        else
	        {
	            printf("%d,%d,%d",j,j+1,j+2);
	            break;
	        }
	    }
	}
	return 0;
}

