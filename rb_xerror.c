#include <stdlib.h>
#include "rb.h"

void	rb_xerror(char *str)
{
  rb_print_err("Error : ");
  rb_putstr(str);
  my_putchar('\n');
  exit(-1);
}
