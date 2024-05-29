#include<stdio.h>
#include<string.h>

#define k100
#define l10
int main()
{
  char p[k],s[l],c;
  int  i,j,k,m,n;
  scanf("%s",p);
  scanf("%c",&c);
  scanf("%s",s);
  m=strlen(p);
  n=strlen(s);
  for(i=0;i<strlen(p);i++)
  {
    if(p[i]==c)
    {
      for(j=m,k=n-1;j>=i;j--,k--)
      {
        p[j+n-1]=p[j];
      }
      for(j=0;j<n;j++)
      {
        p[i+j]=s[j];
      }
      i=i+n-1;
      m=m+n-1;
    }
  }
  printf("%s",p);

}
