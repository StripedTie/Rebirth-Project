#include "rb.h"

int	count_digit(int d)
{
  int	nbr;

  nbr = 0;
  while (d <= -9 || d >= 9)
    {
      d = d / 10;
      nbr = nbr + 1;
    }
  return (nbr + 1);
}
