#include <stdio.h>
#include <stdlib.h>
#include "rb.h"

int	rb_strlen(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    rb_putstr(str);
  else
    {
      while (str[i] != '\0')
        {
          i = i + 1;
        }
      return (i);
    }
}
