#include <stdio.h>
#include <stdlib.h>
void b_sort(int a[], int n)
{
  int i, j, tmp;
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[j] < a[i])
      {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
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
  printf("\n The Array is:");
  show(a, n);
  printf("\n The sorted array is:");
  b_sort(a, n);
  show(a, n);
}