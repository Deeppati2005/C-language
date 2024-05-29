#include <stdio.h>
void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
int partition(int arr[], int low, int high)
{
  int pivot = arr[low];
  int i = low + 1;

  for (int j = low + 1; j <= high; j++)
  {
    if (arr[j] < pivot)
    {
      swap(&arr[i], &arr[j]);
      i++;
    }
  }

  swap(&arr[low], &arr[i - 1]);
  return i - 1;
}

void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pivotIndex = partition(arr, low, high);
    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, high);
  }
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  int arr[100];
  int n, i;
  printf("\n Enter the size of the array:");
  scanf("%d", &n);
  printf("\n Enter the eliments:");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Original array: ");
  printArray(arr, n);
  quickSort(arr, 0, n - 1);
  printf("Sorted array: ");
  printArray(arr, n);
}