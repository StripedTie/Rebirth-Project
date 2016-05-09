#include <stdlib.h>
#include "rb.h"

void	rb_show_word_tab(char **array)
{
  int	i;

  i = 0;
  if (array == NULL)
    rb_xerror("rb_show_word_tab : pointer array is NULL");
  while (array[i] != NULL)
    {
      my_putstr(array[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
