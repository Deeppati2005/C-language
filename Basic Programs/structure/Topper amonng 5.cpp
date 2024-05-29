#include<stdio.h>
struct topper
{
	int marks,roll;
	char name[30];
};
int main()
{
	struct topper s1[5];
	int i,j,max=0,p=0;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the Name,Marks and Roll:");
		gets(s1[i].name);
		scanf("%d",&s1[i].marks);
		scanf("%d",&s1[i].roll);
		fflush(stdin);
	}
	for(i=0;i<5;i++)
	{
		if(s1[i].marks>max)
		{
			max=s1[i].marks;
			p=i;
		}
	}
	printf("\n =======TOPPER DETAILS======");
	printf("\n Roll : %d\n Name : %s \n Marks : %d",s1[p].roll,s1[p].name,s1[p].marks);

}
