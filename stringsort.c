#include <stdio.h>
#include<string.h>
void swap(char b[20][20],int i,int j)
{
    char t[20];
    strcpy(t,b[i]);
    strcpy(b[i],b[j]);
    strcpy(b[j],t);
}
int main(void) 
{
	int i,j,l=0,k=0,h=0;
	char a[20][20],b[20][20];
	for(i=0;i<10;i++)
	{
	    scanf("%s",a[i]);
	}
	for(i=0;i<10;i++)
	{
	    k=0;
	    if(strlen(a[i])>l)
	    {
	        l=strlen(a[i]);
	    }
	    if(a[i][k]=='0')
	    {
	        while(k<strlen(a[i]))
	        {
	            a[i][k]=a[i][k+1];
	            k++;
	        }
	    }
	}
	for(i=1;i<=l;i++)
	{
	    for(j=0;j<10;j++)
	    {
	        if(strlen(a[j]==i))
	        {
	            strcpy(b[h],a[j]);
	            h++;
	        }
	    }
	}
	for(i=0;i<10;i++)
	{
	    for(j=i+1;j<10;j++)
	    {
	        k=0;
	        if(strlen(b[i])==strlen(b[j]))
	        {
	            while(k<strlen(b[i]))
	            {
	                if(b[i][k]>b[j][k])
	                {
	                    swap(b,i,j);
	                    break;
	                }
	                k++;
	           }
	        }
	        else
	        {
	            break;
	        }
	    }
	}
	for(i=0;i<10;i++)
	{
	    printf("%s\t",b[i]);
	}
	return 0;
}

