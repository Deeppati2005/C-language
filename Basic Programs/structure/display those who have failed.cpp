#include<stdio.h>

typedef struct student{
	int roll;
	char name[30];
	int marks[5];
}stu;
int count(int m[],int n=5)
{
	int i,c=0;
	for(i=0;i<n;i++)
	{
		if(m[i]<40)
		{
			c++;
		}
	}
	return c;
}
void check(stu a[],int n=5)
{
	int i,c;
	for(i=0;i<n;i++)
	{
		c=count(a[i].marks,5);
		printf("\n c=%d",c);
		if(c>2)
		{
		printf("%s %d ",a[i].name,a[i].roll);
		}
}
}
int main()
{
	stu s[]={{1,"Amit",{20,89,22,45,18}},{2,"Subho",{69,90,89,45,88}},{3,"Deep",{65,25,34,36,30}},{4,"Sayan",{25,31,32,36,39}},{5,"Monu",{78,32,33,35,39}}};
	int n;
	check(s,n);
}
