#include <stdlib.h>
#include "rb.h"

void	*rb_malloc(size_t s)
{
  void	*ptr;

  if (s == 0)
    rb_xerror("rb_malloc : Can't allocate 0 bytes");
  else if ((ptr = malloc(s)) == NULL)
    rb_xerror("rb_malloc : Pointer is NULL");
  return (ptr);
}
