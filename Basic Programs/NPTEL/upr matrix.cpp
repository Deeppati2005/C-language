#include <stdio.h>

int main()
{
	int N,a[N][N],i,j,flag=0;
	scanf("%d",&N);
	for(i=0; i<N;i++)
		{
			for(j= 0;j<N;j++)
			scanf("%d",&a[i][j]);
		}

	for (i=1;i<N;i++)
		for (j=0;j<i;j++)
			if (a[i][j] != 0)
				flag = 0;
			else
				flag = 1;
  
	if (flag == 1)
		printf("1");
	else
		printf("0");
	}
