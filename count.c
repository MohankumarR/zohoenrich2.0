#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int b=0,i=0,j=0,k=0,m=0,n=0;
	scanf("%s",&a);
	while(a[b]!='\0')
	{	
		switch (a[b])
		{
			case 'a':
			{
				i++;
				break;
			}
		 case 'e':
			{
				j++;
				break;
			}
		
			case 'i':
			{
				k++;
				break;
			}
		
			case 'o':
			{
				m++;
				break;
			}
		
			case 'u':
			{
				n++;
				break;
			}
		}
		b++;
	}
	printf("a:%d\n",i);
	printf("e:%d\n",j);
	printf("i:%d\n",k);
	printf("o:%d\n",m);
	printf("u:%d\n",n);
}
