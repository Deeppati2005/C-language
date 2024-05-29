#include<stdio.h>
struct topper
{
	int marks,roll;
	char name[30];
};
void sort(struct topper a[],int n=5)
{
	int i,j;
	struct topper tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j].marks<a[j+1].marks)
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
	printf("Name\tMarks\tRoll\n");
	for(i=0;i<5;i++)
	{
		puts(a[i].name);
		printf("\t%d",a[i].marks);
		printf("\t%d\n",a[i].roll);
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
	sort(s1,n);
	show(s1,n);
	
}
