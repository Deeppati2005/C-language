#include<stdio.h>
#include<string.h>
struct topper
{
	int marks,roll;
	char name[30];
};
void sort_name(struct topper a[],int n=5)
{
	int i,j,c;
	struct topper tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			c=strcmpi(a[j].name,a[j+1].name);
			if(c>0)
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
void show(struct topper a[],int n=5)
{
	int i,j;
	printf("Name\t  Marks\tRoll\n");
	for(i=0;i<5;i++)
	{
		puts(a[i].name);
		printf("\t  %d\t",a[i].marks);
		printf("%d\n",a[i].roll);
		fflush(stdin);
	}
}
int main()
{
	struct topper s1[5];
	int i,j,max=0,p=0,n;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the Name,Marks and Roll:");
		gets(s1[i].name);
		scanf("%d",&s1[i].marks);
		scanf("%d",&s1[i].roll);
		fflush(stdin);
	}
	sort_name(s1,n);
	show(s1,n);
	
}
