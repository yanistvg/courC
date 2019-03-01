#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int i = 0, e = 0, z = 5;

  for (i=0; i<z; i++)
    printf("%d ", e += i+z);
  printf("\n");
  for (i=5, e=0, z=2; i>e; i--)
    printf("%d ", z += i+e);
  printf("\n");
  return 0;
}
