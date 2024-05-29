#include <stdio.h>
int main() 
{	
	int a[10],i,j,sum=0,count=0;
	printf("\n Enter 10 numbers:");;
	for(i=0;i<10;i++) 
	{
		scanf("%d",&a[i]);
	}
  for(i=0;i<10;i++) 
  {
    sum=0;
    for(j=1;j<a[i];j++) 
	{
      if(a[i]%j==0) 
	  {
        sum=sum+j;
      }
    }
    if(sum==a[i]) 
	{
      count++;
    }
  }
  printf("perfect no are=%d",count);
}

