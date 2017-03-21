#include <stdio.h>(

int main(void) 
{
  int a[10],i,l1=0,l2=0;
  for(i=0;i<6;i++)
  {
    scanf("%d",&a[i]);
     if(a[i]%2==0)
    {
      if(a[i]>l1)
      {
        l1=a[i];
      }
    }
  }
  for(i=0;i<6;i++)
  {
   if(a[i]!=l1&&a[i]>l2&&a[i]%2==0)
   {
     l2=a[i];
   }
  }
  printf("%d",l2);
	return 0;
}
