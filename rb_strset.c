#include <stdlib.h>
#include "rb.h"

void	rb_strset(char *str, int c, size_t n)
{
  int	i;

  i = 0;
  if (str == NULL)
    rb_xerror("rb_strset : String pointer is NULL");
  while (n > 0)
    {
      str[i++] = c;
      n--;
    }
}
