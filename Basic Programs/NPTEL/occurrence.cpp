#include <stdio.h>

int find_odd(int k)
{
  int n, i, j = 0;
  while (n != -1)
  {
    scanf("%d", &n);
    if (n % 2 == 1)
    {
      j++;
      if (j == k)
      {
        return n;
        break;
      }
    }
  }
  if (j != k)
  {
    return (-1);
  }
}

int main()
{
  int k;
  scanf("%d", &k);
  printf("%d", find_odd(k));
}
