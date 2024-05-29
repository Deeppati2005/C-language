#include <stdio.h>
int main()
{
	int i, j, k = 3, l;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%5d", k++);
		}
		k++;
		printf("\n");
	}
}
