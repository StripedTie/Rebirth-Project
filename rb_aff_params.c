#include <stdlib.h>
#include "rb.h"

void	rb_aff_params(int array_len, char **array)
{
  int	i;

  if (array == NULL)
    rb_xerror("rb_aff_params : array is NULL");
  i = 0;
  while (i != array_len)
    {
      my_putstr(array[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
