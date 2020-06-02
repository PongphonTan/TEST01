#include <stdio.h>

int main()
{
  int n = 100;
  n /= 10;
  long long int result = 1;
  int k = 0, len = 1;
  for (int i = 1; i <= n; ++i)
  {
    for (int j = 2; j <= 9; ++j)
    {
      result *= j;
      printf("i = (%d, %d)     : %llu\n", i, j, result);
      int n = 2, cnt = 1;
      while (result /= 10)
          len++;
          print("%d", len)
      while (k <= len)


    }
  }

  printf("i = (10, 9)     : %llu\n", result);
  return 0;
}
