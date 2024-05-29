#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  int i,j,count=1,max=1;
  scanf("%s",s);
  for(i=0;s[i];i++)
  {
	   	if(s[i]==s[i+1])
	   	{
	   		count++;
	   		
			if(count>max)
			{
				max=count;
			}
	}
		else
		{
			count=1;
		}
 }
  printf("%d",max);
}
