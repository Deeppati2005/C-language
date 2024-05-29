#include<stdio.h>
int block_product(int a[],int n)
{
  if(n==4)
  {
    return a[0]*a[3]-a[1]*a[2];
  }
  else
  {
    int m=n/4;
    int A[m],B[m],C[m],D[m];
    for(int i=0;i<m;i++)
    {
      A[i]=a[i];
      B[i]=a[m+i];
      C[i]=a[2*m+i];
      D[i]=a[3*m+i];
    }
    return block_product(A,m)*block_product(D,m)-block_product(B,m)*block_product(C,m);
    
  }
}

int main()
{
  int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("%d",block_product(a,n));
}
