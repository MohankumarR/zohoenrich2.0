#nclude<stdio.h>
int main()
{
  int a[20][20],k,j,m,n,c=0,e=0,b=0;
  scanf("%d%d",&m,&n);
  j=0;
  k=n-2;
  while(c<m)
  {
   while(e<n)
	 {
		 a[j][k]=b++;
		 j=j+m-1;
		 k=k+1;
		 if(j>=m)
		 {
		   j=j-m;    
		 }
		 if(k>=n)
		 {
		   k=k-n;
		 }
		 e++;
    }
    c++;
    e=0;
    if(j!=0)
    {
     	j=j-1;
    }
    else
    {
      j=j+m-1;
    }
    if(k!=0)
    {    
       k=k-1;
    }
    else
    {
       k=k+n-1;
    }
  } 
  for(int g=0;g<m;g++)
  {
    for(int h=0;h<n;h++)
    {
       printf("%d\t",a[g][h]);
    }
     printf("\n");
   }
}