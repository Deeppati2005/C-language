#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,j,c=0,s1,s2;
	scanf("%s%s",a,b);
	for(i=0;i<strlen(a);i++)
	{
		s1=s1+a[i];
	}	
	for(i=0;i<strlen(a);i++)
	{
		s2=s2+b[i];
	}	
	if(strlen(a)==strlen(b)&&s1==s2){
		
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==b[i])
			c++;		
		}
		printf("%d",c); 
		
	}
	else
	{
		printf("-1");
	}
}
