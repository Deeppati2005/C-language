#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct dob{
	int d1,m1,y1,d2,m2,y2;
}stu;
int  main()
{
	stu s;
	char a[50],b[50]="11-03-2023",tmp1[5],tmp2[5];
	int i,j=0,k=0,c=0,x,y,p,q,r;
	printf("\nEnter the DOB:");
	gets(a);
	strcat(a,"-");
	strcat(b,"-");
	for(i=0;a[i];i++)
	{
		if(a[i]!='-'&&b[i]!='-')
		{
			tmp1[j++]=a[i];
			tmp2[k++]=b[i];
		}
		else
		{
			c++;
			tmp1[j]='\0';
			tmp2[k]='\0';
			x=atoi(tmp1);
			y=atoi(tmp2);
			if(c==1)
			{
				s.d1=x;
				s.d2=y;
			}
			else if(c==2)
			{
				s.m1=x;
				s.m2=y;
			}
			else
			{
				s.y1=x;
				s.y2=y;
			}
			j=0;
			k=0;
		}
	}
	if(s.d2>=s.d1&&s.m2>=s.m1)
	{
		p=s.d2-s.d1;
		q=s.m2-s.m1;
	}
	else if(s.d2<s.d1&&s.m2<s.m1)
	{
		p=(s.d2+30)-s.d1;
		s.m2=s.m2-1;
		q=(s.m2+12)-s.m1;
		s.y2=s.y2-1;
	}
	else if(s.d2<s.d1)
	{
		p=(s.d2+30)-s.d1;
		s.m2=s.m2-1;
	}
	else if(s.m2<s.m1)
	{
		q=(s.m2+12)-s.m1;
		s.y2=s.y2-1;
	}
	printf("AGE= %d years %d months %d days",s.y2-s.y1,q,p);
}
