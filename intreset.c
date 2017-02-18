#include<stdio.h>
float si(int a,int b,float c)
{
	return((a*b*c)/(100*12));
}
int main()
{
	int n,i,f;
	float p,r,intr;
	scanf("%f%f",&p,&r);
	scanf("%d%d",&n,&f);
	for(i=0;i<n/f;i++)
	{
		intr=si(p,f,r);
		p=p+intr;
	}	
	printf("%f",p);
}/compund intreset
#include<stdio.h>
float si(int a,int b,float c)
{
	return((a*b*c)/(100));
}
int main()
{
	int p,n;
	float r,rel;
	scanf("%d%d%f",&p,&n,&r);
	rel=si(p,n,r);
	printf("%f",rel);
}/simple intrest
#include<stdio.h>
float si(int a,int b,float c)
{
	return((a*b*c)/(1200));
}
float add(float b[10],int l)
{
	float r=0;
	for(int i=0;i<l;i++)
	{
		r=r+b[i];
	}
	return(r);
}
int main()
{
	int n,f,i,j,k;
	float p,r,a[10],s=0,sum;
	scanf("%f%f",&p,&r);
	scanf("%d%d",&n,&f);
	for(i=0;i<n/f;i++)
	{
		k=0;
		for(j=0;j<f;j++)
		{
			s=s+p;
			a[k]=si(s,1,r);
			k++;
		}
		sum=add(a,k);
		s=s+sum;
	}
	printf("%f",s);
}/recuringdeposit
