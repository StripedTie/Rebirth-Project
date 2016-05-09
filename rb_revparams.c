#include <stdio.h>
#include <stdlib.h>
#include "rb.h"

int	rb_revparams(char **array)
{
  char	*tmp;
  int	i;
  int	j;

  if (array == NULL)
    rb_xerror("rb_revparams : array pointer is NULL");
  i = 0;
  j = rb_strarraylen(array) - 1;
  while (i < j)
    {
      tmp = array[j];
      array[j] = array[i];
      array[i] = tmp;
      i = i + 1;
      j = j - 1;
    }
}
