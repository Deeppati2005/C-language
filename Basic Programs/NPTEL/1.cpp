#include<stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(d<=a*100+b*10+c*1)
  {
    printf("1");
  }
  else
  {
    printf("0");
  }
}
