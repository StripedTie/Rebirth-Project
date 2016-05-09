#include <stdlib.h>
#include "rb.h"

char	*rb_negative_to_string(int nbr)
{
  int	i;
  int	mod;
  int	div;
  char	*str;

  mod = 10;
  div = 1;
  str = rb_malloc(sizeof(char) * (count_digit(nbr) + 1));
  str[i = (count_digit(nbr) + 1)] = '\0';
  i = i - 1;
  nbr = nbr * (-1);
  while(i > 0)
    {
      str[i] = ((nbr % mod) / div) + 48;
      mod = mod * 10;
      div = div * 10;
      i = i - 1;
    }
  str[0] = '-';
  return (str);
}

char	*rb_int_to_string(int nbr)
{
  int	i;
  int	mod;
  int	div;
  char	*str;
  
  if (nbr < -2147483648 || nbr > 2147483647)
    rb_xerror("rb_int_to_string : nbr is too big for an int");
  if (nbr < 0)
    return (rb_negative_to_string(nbr));
  mod = 10;
  div = 1;
  str = rb_malloc(sizeof(char) * (count_digit(nbr)));
  str[i = count_digit(nbr)] = '\0';
  i = i - 1;
  while (i >= 0)
    {
      str[i] = ((nbr % mod) / div) + 48;
      mod = mod * 10;
      div = div * 10;
      i = i - 1;
    }
  return (str);
}
