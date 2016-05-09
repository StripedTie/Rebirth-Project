#include <stdlib.h>
#include "rb.h"

int	rb_strarraylen(char **array)
{
  int	i;

  i = 0;
  if (array == NULL)
    rb_xerror("rb_strarraylen : NULL pointer given");
  while (array[i] != NULL)
    i = i + 1;
  return (i);
}
