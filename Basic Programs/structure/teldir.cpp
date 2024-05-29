#include<stdio.h>
#include<string.h>
typedef struct TelDir{
	char fname[10],lname[10];
	int cno;
}DIR;
void show(DIR a[],int n)
{
	int i;
	printf("\n First Name \t Last Name \t\t Cno");
	for(i=0;i<n;i++)
	{
		printf("\n %s \t\t %s \t\t %d",a[i].fname,a[i].lname,a[i].cno);
	}
}
void sort(DIR a[],int n)
{
	int i,j,c;
	DIR tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			c=strcmp(a[j].lname,a[j+1].lname);
			if(c>0)
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
			else if(c==0)
			{
				c=strcmp(a[j].fname,a[j+1].fname);
				if(c>0)
				{
					tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
				}
				else if(c==0)
				{
					if(a[j].cno>a[j+1].cno)
					{
						tmp=a[j];
						a[j]=a[j+1];
						a[j+1]=tmp;
					}
				}
			}
		}
	}
}
int main()
{
	DIR arr[]={{"Sanjib","Das",456},{"Rajib","Das",654},{"Amit","Mondal",784},{"Amit","Mondal",145},{"Nitin","Roy",987}};
	show(arr,5);
	sort(arr,5);
	printf("\n-----------------------------------\n");
	show(arr,5);
}
