#include <stdlib.h>
#include "rb.h"

int	separator_delim(char c, char delim)
{
  if (c == delim)
    return (1);
  return (0);
}

int	count_words_delim(char *str, char delim)
{
  int	len;
  int	i;

  i = 0;
  len = 0;
  if (str == NULL)
    rb_xerror("count_words_delim : String pointer is NULL");
  while (str[i] != '\0')
    {
      if (separator_delim(str[i], delim) == 0)
	{
	  len = len + 1;
	  while (separator_delim(str[i], delim) == 0 && str[i] != '\0')
	      i = i + 1;
	}
      if (str[i] != '\0')
	i = i + 1;
    }
  return (len);
}
