#include "rb.h"

void	my_cat(int fd)
{
  char	*str;

  while (str = get_line(fd))
    {
      my_putstr(str);
      my_putchar('\n');
      rb_free(str);
    }
}
