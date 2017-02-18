#include<stdio.h>
int main()
{
 	char a[10];
	int i,b[10],j,k=0,l;
	for(i=0;i<8;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<8;i++)
	{
		l=0;
		for(j=i+1;j<8;j++)
		{
			if(a[i]==a[j])
			{
				l++;
				i++;
			}
			else
			{
				break;
			}
		}
		b[k]=l+1;
		k++;
	}
	l=0;
	for(i=0;i<8;i=i+b[l-1])
	{
		printf("%c%d",a[i],b[l]);
		l++;
	}

}
