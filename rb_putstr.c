#include <stdlib.h>
#include "rb.h"

void	rb_putstr(char *str)
{
  if (str != NULL)
    write(1, str, my_strlen(str));
  else
    rb_xerror("rb_putstr : String pointer is NULL");
}
