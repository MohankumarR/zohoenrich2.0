#include<stdio.h>
#include<string.h>
int read(int arr[],int h)
{
    int d=0,n=0,m=0;
    if(h%2==0)
    {
        for(int i=0;i<h;i++)
        {
            if(arr[i]%2==0)
            {
                d=d+1;
            }
        }
    }
    else
    {
       for(int i=0;i<h;i++)
       {
           if(arr[i]%2==0)
            {
                d=d+1;                  
            }
           else if(arr[i]%2!=0&&m==0)
           {
               d=d+1;
               m=m+1;
           }
        }
    }
    return(d);
}
int main()
{
    char a[100];
	int l,i,j,n=0,b[20],k=0,g;
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(a[i]==a[j])
			{
				k++;
			}	
		}
   		b[n]=k;
		k=0;
		n++;
	}
    g=read(b,l);
    if(g==l)
    {
        printf("true");
    }
    else
    {
        printf("false");
     }
    return 0;
}

         
