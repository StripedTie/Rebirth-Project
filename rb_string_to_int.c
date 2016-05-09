#include <stdlib.h>
#include "rb.h"

int	char_to_int(char c)
{
  int nbr;

  nbr = c - '0';
  return (nbr);
}

int	rb_string_to_int(char *str)
{
  int	nbr;
  int	i;

  i = 0;
  if (str == NULL)
    rb_xerror("rb_string_to_int : String pointer is NULL");
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  nbr = nbr * 10;
	  nbr = nbr + (char_to_int(str[i]));
	  i = i + 1;
	}
      else
	i = i + 1;
    }
  if (str[0] == '-')
    return (-nbr);
  return (nbr);
}
