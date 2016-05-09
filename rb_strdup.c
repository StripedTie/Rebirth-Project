#include <stdlib.h>
#include "rb.h"

char	*rb_strdup(char *str)
{
  char	*final;

  if (str == NULL)
    rb_xerror("rb_strdup : str has a NULL value");
  final = rb_malloc(sizeof(char) * (my_strlen(str) + 1));
  final = rb_strcpy(final, str);
  return (final);
}
