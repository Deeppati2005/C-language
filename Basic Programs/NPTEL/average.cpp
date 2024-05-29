#include<stdio.h>

int main() 
{
  int n,p;
  scanf("%d",&n);
  p=n;
  while(n!=-1)
  {
    scanf("%d",&n);
    printf("%.1f ",(p+n)/2.0);
    p=n;
  }
}
