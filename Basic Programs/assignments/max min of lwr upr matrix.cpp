#include<stdio.h>
int main()
{
	int a[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},maxup,maxlw,minup,minlw,i,j;
	for(i=1;i<4;i++)
	{
		maxlw=a[1][0];
		minlw=a[1][0];
		for(j=0;j<3;j++)
		{
			if(i>j)
			{
				if(maxlw<a[i][j])
				{
					maxlw=a[i][j];
				}
				
				if(minlw>a[i][j])
				{
					minlw=a[i][j];
				}
			}
		}
	}
	printf("maxlw=%d,minlw=%d & their diff is %d\n",maxlw,minlw,maxlw-minlw);
	
	
		for(i=0;i<3;i++)
	{
		maxup=a[0][1];
		minup=a[0][1];
		for(j=1;j<4;j++)
		{
			if(i<j)
			{
				if(maxup<a[i][j])
				{
					maxup=a[i][j];
				}
				
				if(minup>a[i][j])
				{
					minup=a[i][j];
				}
			}
		}
	}
	printf("maxup=%d,minup=%d & their diff is %d",maxup,minup,maxup-minup);
}
