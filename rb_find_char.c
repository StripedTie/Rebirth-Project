#include <stdlib.h>
#include "rb.h"

int	rb_find_char(char *str, char toCmp)
{
  int	i;
  
  if (str == NULL)
    rb_xerror("rb_find_char : str has a NULL value");
  if (toCmp == '\0')
    rb_xerror("rb_find_char : toCmp has a NULL value");
  i = 0;
  while (str[i] != toCmp)
    i = i + 1;
  return (i);
}
