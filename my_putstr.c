#include "rb.h"

void	my_putstr(char *str)
{
  int	i;

  i = rb_strlen(str);
  write(1, str, i);
}
