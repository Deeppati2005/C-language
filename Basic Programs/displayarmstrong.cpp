#include<stdio.h>
int main() 
{
  int i,j,n,sum=0,a,count=0;
  int armstrong[100];
  for(i=10;i<=1000;i++) 
  {
    n=i;
    sum=0;
    while(n>0) 
	{
      a=n%10;
      sum=sum+(a*a*a);
      n=n/10;
    }
    if(i==sum) 
	{
      armstrong[count] = i;
      count++;
    }
  }
  printf("There are %d Armstrong numbers between 10 and 1000",count);
  printf("The Armstrong numbers are:\n");
  for(j=0;j<count;j++) 
  {
    printf("%d\n", armstrong[j]);
  }
}

