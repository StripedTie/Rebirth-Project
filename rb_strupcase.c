#include <stdlib.h>
#include "rb.h"

char	*rb_strupcase(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    rb_xerror("rb_strupcase : String pointer is NULL");
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
      i = i + 1;
    }
  return (str);
}
