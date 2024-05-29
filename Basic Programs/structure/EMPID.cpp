#include<stdio.h>
typedef struct emp{
	int empid;
	char empname[50];
}emp;
void sort(emp a[],int n)
{
	int i,j,c;
	emp tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			
			if(a[j].empid>a[j+1].empid)
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
void show(emp a[],int n)
{
	int i,j;
	printf("Emp id\t\tEmp Name\n");
	printf("----------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%s\n",a[i].empid,a[i].empname);
	}
}
int main()
{
	emp c[]={{3,"Arnab Roy"},{2,"Aritra Das"},{1,"Deep Pati"},{5,"Pabitra Mondal"},{4,"Anupam Roy"},{7,"Subhayan Mukherjee"},{6,"Amit Roy"},{9,"Soumydip Banerjee"},{8,"Siddhartha Ghosh"},{10,"Shyamal Ghosh"}};
	sort(c,10);
	show(c,10);
	
}
