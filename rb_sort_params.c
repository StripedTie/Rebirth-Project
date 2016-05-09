#include <stdio.h>
#include <stdlib.h>
#include "rb.h"

int	rb_sort_params(char **array)
{
  int	i;
  char	*tmp;

  if (array == NULL)
    rb_xerror("rb_sort_params : pointer array is NULL");
  i = 1;
  while (array[i] != NULL)
    {
      if ((rb_strcmp(array[i - 1], array[i])) > 0)
	{
	  tmp = array[i];
	  array[i] = array[i - 1];
	  array[i - 1] = tmp;
	  i = 1;
	}
      i = i + 1;
    }
}
