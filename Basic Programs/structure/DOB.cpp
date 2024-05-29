#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct dob{
	int d,m,y;
}stu;
int  main()
{
	stu s;
	char a[50],tmp[5];
	int i,j=0,c=0,x;
	printf("\nEnter the DOB:");
	gets(a);
	strcat(a,"-");
	for(i=0;a[i];i++)
	{
		if(a[i]!='-')
		{
			tmp[j++]=a[i];
		}
		else
		{
			c++;
			tmp[j]='\0';
			x=atoi(tmp);
			if(c==1)
			{
				s.d=x;
			}
			else if(c==2)
			{
				s.m=x;
			}
			else
			{
				s.y=x;
			}
			j=0;
		}
	}
	printf("Day=%d,Month=%d,Year=%d",s.d,s.m,s.y);
}
