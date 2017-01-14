#include <stdio.h>

int main(void)
{
    int a[20],i,j,k=0;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0||i==j)
            {
                printf("1\t");
            }
            else if(j==1||j==i-1)
            {
                a[k]=i;
                printf("%d\t",a[k]);
                k++;
            }
            else
            {
                a[k]=a[k-i+2]+a[k-i+1];
                printf("%d\t",a[k]);
                k++;
            }
        }
        printf("\n");
    }
	return 0;
}

