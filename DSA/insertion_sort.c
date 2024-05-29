#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int a[], int n)
{
  int i, j, tmp;
  for (i = 0; i < n; i++)
  {
    tmp = a[i];
    j = i - 1;
    while (tmp < a[j] && j >= 0)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = tmp;
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
  insertion_sort(a, n);
  show(a, n);
}