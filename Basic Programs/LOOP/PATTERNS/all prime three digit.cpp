#include <stdio.h>
int main()
{
  int i,N,count=0; 
  for(N=100; N <=999; N++)
  {
    for (i =101;i<=N; i++)
    {
  		if(N%i == 0)
  		{
     		count++;
		}
	}
}
    if(count==1)
    {
	printf(" %d ",N);
    }  
}
