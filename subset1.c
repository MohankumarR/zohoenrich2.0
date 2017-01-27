#include <stdio.h>
int recur(int a[20],int m,int n)
{
    int k=n%3;
    printf("%d",a[k]);
    if(m==1)
    {
        printf("\n");
        if(k==2)
        {
            m++;
        }
    }
    if((m+n)%3==0)
    {
        if(m==2)
        {
            printf("\n");
            m++;
        }
        if(m==4)
        {
            printf("\n");
            m++;
        }
    }
    if(m==3)
    {
        if((m+n)%5==0)
        {
            printf("\n");
            n++;
            m++;
        }
        else
        {
            n++;
            n++;
        }
    }
    if(n<=15)
    {
        return(recur(a,m,n+1));
    }
    else
    {
        return(m);
    }
    
}
int main(void) 
{
	int a[10],i,j=0;
	for(i=0;i<3;i++)
	{
	    scanf("%d",&a[i]);
	}
   recur(a,1,j);

	return 0;
}

