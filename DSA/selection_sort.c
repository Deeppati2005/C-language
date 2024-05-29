#include <stdio.h>
#include <stdlib.h>
void s_sort(int a[], int n)
{
  int i, j, tmp, small;
  for (i = 0; i < n; i++)
  {
    small = i;
    for (j = i + 1; j < n; j++)
    {
      if (a[j] < a[small])
      {
        small = j;
      }
    }
    if (small != i)
    {
      tmp = a[i];
      a[i] = a[small];
      a[small] = tmp;
    }
  }
}
void show(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("\t%d", a[i]);
  }
}
int main()
{
  int a[100], n, i;
  printf("\n Enter the size of the array:");
  scanf("%d", &n);
  printf("\n Enter the eliments:");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("The Array is:");
  show(a, n);
  printf("\nThe sorted array is:");
  s_sort(a, n);
  show(a, n);
}