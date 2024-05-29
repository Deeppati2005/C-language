#include<stdio.h>
int main()
{
	int ma[][4]={{1,11,5,4},{14,2,12,15},{8,16,6,9},{13,7,10,3}};
	int i,j,tmp,k,l;
	for(i=0;i<4;i++)
	{ 
		for(j=0;j<4;j++)
		{
			tmp=ma[i][j];
			l=j+1;
 				for(k=i;k<4;k++)
				{
					while(l<4)
					{
						if (tmp>ma[k][l])
						{
							tmp=ma[k][l];
							ma[k][l]=ma[i][j];
							ma[i][j]=tmp;
						}
						l++;
					}
					l=0;
				}
				
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",ma[i][j]);
		}
		printf("\n");
	}

}

