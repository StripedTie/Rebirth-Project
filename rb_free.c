#include <stdlib.h>
#include "rb.h"

void	rb_free(void *ptr)
{
  if (ptr == NULL)
    rb_xerror("rb_free : Can't free NULL pointer");
  free(ptr);
}
