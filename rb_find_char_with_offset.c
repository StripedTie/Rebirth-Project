#include <stdlib.h>
#include "rb.h"

int	rb_find_char_with_offset(char *str, char toCmp, int offset)
{
  if (str == NULL)
    rb_xerror("rb_strdup : str has a NULL value");
  if (offset > my_strlen(str))
    rb_xerror("rb_substr : offset is longer than str lenght");
  while (str[offset] != toCmp)
    offset = offset + 1;
  return (offset);
}
