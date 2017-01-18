#include <stdio.h>

int main(void)
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=0;
        for(j=1;j<=9;j++)
        {
            if((i+j)%6==0)
            {
                while(k<i)
                {
                    printf("\t*\t");
                    k++;
                }
                break;
            }
            printf("\t");
        }
        printf("\n");
    }
	return 0;
}
