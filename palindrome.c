#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,j,flag=0;
	scanf("%s",&a);
	i=strlen(a);
	for(j=0;j<i;j++)
	{
		if(a[j]!=a[i-j-1])
		{
			flag=1;
			break;
		}
	}
  if(flag==1)
	{
		printf("not palindrome");
	}
	else
	{
		printf("palindrome");
	}
	return 0;
}
