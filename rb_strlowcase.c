#include <stdlib.h>
#include "rb.h"

char	*rb_strlowcase(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    rb_xerror("rb_strlowcase : String pointer is NULL");
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      i = i + 1;
    }
  return (str);
}
