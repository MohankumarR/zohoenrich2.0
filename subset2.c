#include <stdio.h>
int recur(int a[20],int j)
{
    printf("%d",a[j%3]);
    if(j<=2)
    {
        printf("\n");
    }
    else if(j>2&&j<=8&&(j%2)==0)
    {
        printf("\n");
        if(j==4)
        {
            while(j<7)
            {
                printf("%d",a[(j+2)%3]);
                j=j+2;
            }
            j=j-2;
            printf("\n");
        }
    }
    if(j<11)
    {
        return (recur(a,j+1));
    }
    else
    {
        return (j);
    }
}
int main(void)
{ 
    int a[10],i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    recur(a,0);
    return 0;
}
