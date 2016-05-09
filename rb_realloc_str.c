#include <stdlib.h>
#include "rb.h"

char	*rb_realloc_str(char *str, size_t s)
{
  char	*ret;

  if (str == NULL)
    rb_xerror("rb_realloc_str : String pointer is NULL");
  if (s < my_strlen(str))
    rb_xerror("rb_realloc_str : s value is too short");
  ret = rb_malloc(sizeof(char) * (s + 1));
  rb_strcpy(ret, str);
  rb_free(str);
  return (ret);
}
