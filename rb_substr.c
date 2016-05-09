#include <stdlib.h>
#include "rb.h"

char	*rb_substr(char *str, int start, int nbChar)
{
  int	i;
  char	*final;

  if (str == NULL)
    rb_xerror("rb_substr : str has a NULL value");
  if (start > my_strlen(str))
    rb_xerror("rb_substr : start is longer than str lenght");
  if ((start + nbChar) > my_strlen(str))
    rb_xerror("rb_substr : start + nbChar is longer than str lenght");
  final = rb_malloc(nbChar);
  i = 0;
  while (nbChar != 0)
    {
      final[i] = str[start];
      i = i + 1;
      start = start + 1;
      nbChar = nbChar - 1;
    }
  return (final);
}
