#include <stdio.h>
void merge(int a[], int low, int high, int low1, int high1)
{
  int i, j, k, tmp[100];
  i = k = low;
  j = low1;
  while (i <= high && j <= high1)
  {
    if (a[i] < a[j])
    {
      tmp[k] = a[i];
      i++;
      k++;
    }
    else
    {
      tmp[k] = a[j];
      j++;
      k++;
    }
  }
  if (i <= high)
  {
    while (i <= high)
    {
      tmp[k] = a[i];
      i++;
      k++;
    }
  }
  else
  {
    while (j <= high1)
    {
      tmp[k] = a[j];
      j++;
      k++;
    }
  }
  for (i = low; i <= high1; i++)
  {
    a[i] = tmp[i];
  }
}
void merge_sort(int a[], int low, int high)
{
  if (low < high)
  {
    int mid = (low + high) / 2;
    merge_sort(a, low, mid);
    merge_sort(a, mid + 1, high);
    merge(a, low, mid, mid + 1, high);
  }
}
void show(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("%4d", a[i]);
  }
}
int main()
{
  int a[100];
  int n, i;
  printf("\n Enter the size of the array:");
  scanf("%d", &n);
  printf("\n Enter the eliments:");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("The array before sorting is:");
  show(a, n);
  printf("\nThe array after sorting is:");
  merge_sort(a, 0, n - 1);
  show(a, n);
  return 0;
}