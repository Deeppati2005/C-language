#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, c = 0, sum = 0, c1 = 0;
	for (i = 1; i <= 1000; i++)
	{
		sum = 0;
		c = 0;
		for (j = i; j > 0; j = j / 10)
		{
			c++;
		}
		for (j = i; j > 0; j = j / 10)
		{
			sum += pow((j % 10), c);
		}
		if (sum == i)
			printf("%d\n", i);
		c1++;
	}
	printf("%d nos present between 1 to 1000", c1);
}
