#include <stdlib.h>
#include <stdio.h>
#include "rb.h"

int		rb_memcmp(void *str1, void *str2, size_t n)
{
  unsigned char	*s_str1;
  unsigned char	*s_str2;

  if (str1 == NULL || str2 == NULL)
    rb_xerror("rb_memcmp : String pointer is NULL");
  s_str1 = (unsigned char *)str1;
  s_str2 = (unsigned char *)str2;
  while (n > 0 && *s_str1 != '\0' && *s_str2 != '\0')
    {
      if (*s_str1 < *s_str2 || *s_str1 > *s_str2)
	return (*s_str1 - *s_str2);
      n = n - 1;
      s_str1 = s_str1 + 1;
      s_str2 = s_str2 + 1;
    }
  return (*s_str1 - *s_str2);
}
