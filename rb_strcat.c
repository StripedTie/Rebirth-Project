#include <stdlib.h>
#include "rb.h"

char	*rb_strcat(char *dest, char *src)
{
  char	*final;
  int	i;
  int	j;

  if (dest == NULL)
    rb_xerror("rb_strcat : dest has a NULL value");
  if (src == NULL)
    rb_xerror("rb_strcat : src has a NULL value");
  final = rb_malloc(sizeof(char) * (my_strlen(src) + my_strlen(dest)));
  i = 0;
  j = 0;
  while (i != my_strlen(dest))
    {
      final[i] = dest[i];
      i = i + 1;
    }  
  while (j != my_strlen(src))
    {
      final[i] = src[j];
      j = j + 1;
      i = i + 1;
    }
  return (final);
}
