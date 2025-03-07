#include <stdio.h>
int main()
{
  int i, j, a = 97;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
      if (i % 2 == 1)
      {
        printf("%c ", a+32);
      }
      else
      {
        printf("%c ", a + 32);
      }
      a++;
    }
    printf("\n");
  }
}