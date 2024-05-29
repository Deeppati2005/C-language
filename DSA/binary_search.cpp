#include <stdio.h>
int bsearch(int a[], int n, int key)
{
	int low = 0, high = n - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (a[mid] == key)
		{
			return mid;
		}
		else if (key > a[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}
int main()
{
	int a[10], n, i, key;
	printf("\n Enter the size:");
	scanf("%d", &n);
	printf("\n Enter the eliments in sorted order:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Enter the serach item:");
	scanf("%d", &key);
	int result = bsearch(a, n, key);
	if (result != -1)
	{
		printf("\n Found at index=%d", result);
	}
	else
	{
		printf("\n Not found");
	}
}
