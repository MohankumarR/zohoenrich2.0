#include <stdio.h>

int main(void) 
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0)
            {
                printf("%d\t",j+1);
            }
            else if(i==j)
            {
                printf("%d"\t,j-i+1);
            }
            else
            {
                printf("%d\t",i+1);
            }
        }
        printf("\n");
    }
	return 0;
}
