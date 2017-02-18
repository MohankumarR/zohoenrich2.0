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
