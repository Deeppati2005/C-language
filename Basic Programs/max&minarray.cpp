#include <stdio.h>
int main()
{
	int a[100], i, n, max, min;
	printf("\n Enter the size of the array:");
	scanf("%d", &n);
	printf("\n Enter the eliments:");
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	max = a[0];
	min = a[0];
	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("\n max=%d and min=%d", max, min);
}
