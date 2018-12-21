#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void temp(int *val)
{
  srand(time(NULL));
  *val = rand() % 256;
}
