#include<stdio.h>

int main()
{
  int val,first,second=0;
  scanf("%d", &val);
  first=val;
  if(val>=0)
  {
    while(val!=-1)
    {
      scanf("%d",&val);
      if(first<val)
      {
        second=first;
        first=val;
      }
      if(val>second&&val<first)
      {
        second=val;
      }
    }
  }
