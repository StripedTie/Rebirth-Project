#include "rb.h"

void	rb_print_err(char *str)
{
  int	len;

  len = my_strlen(str);
  write(2, str, len);
}
