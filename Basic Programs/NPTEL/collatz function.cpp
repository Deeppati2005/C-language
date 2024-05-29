 #include<stdio.h>
 int collatz(int n,int count)
{
	
  if(n==1)//base case
  {
    return count;
  }
  
  else if(n%2==0)
  {
    return collatz(n/2,count+1);
  }								//recursive case
  else
  {
    return collatz(3*n+1,count+1);
  }
  
}
int main()
{
	
  int n,count=0;
  scanf("%d",&n);
  printf("%d",collatz(n,count));
  return 0;
         
}

