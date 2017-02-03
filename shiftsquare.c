#include <stdio.h>
void  disp(int a[20][20])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]==-1)
            {
                printf(" ");
            }
            else
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
}
int main(void) 
{
	int a[20][20],i,j,k,l,temp;
	char s;
	for(i=0;i<4;i++)
	{
	    for(j=0;j<4;j++)
	    {
	        scanf("%d",&a[i][j]);
	        if(a[i][j]==-1)
	        {
	            k=i;
	            l=j;
	        }
	    }
	}
	printf("choice");
	scanf("%c",&s);
	disp(a);
	while(s!='q')
	{
	    switch(s)
	    {
	        case 'u':
	        {
	          if(k==0)
	          {
	               printf("not possible enter new choice");
	          }
	          else
	          {
	              temp=a[k][l];
	              a[k][l]=a[k-1][l];
	              k--;
	              disp(a);
	          }
	           scanf("%c",&s);
	           break;
	        }
	        case 'd':
	        {
	            if(k==3)
	            {
	                printf("not possible enter new choice");
	            }
	            else
	            {
	                 temp=a[k][l];
	                 a[k][l]=a[k+1][l];
	                 k++;
	                 disp(a);
	            }
	             scanf("%c",&s);
	             break;
	        }
	        case 'l':
	        {
	            if(l==0)
	            {
	                printf("not possible enter new choice");
	            }
	            else
	            {
	                 temp=a[k][l];
	                 a[k][l]=a[k][l+1];
	                 l++;
	                 disp(a);
	            }
	             scanf("%c",&s);
	             break;
	        }
	        case 'r':
	        {
	            if(l==3)
	            {
	                printf("not possible enter new choice");
	            }
	            else
	            {
	                 temp=a[k][l];
	                 a[k][l]=a[k][l-1];
	                 l--;
	                 disp(a);
	            }
	             scanf("%c",&s);
	             break;
	        }
	    }
	}
	return 0;
}

