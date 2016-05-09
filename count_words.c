#include <stdlib.h>
#include "rb.h"

int	separator(char c)
{
  if (c == '\n' || c == '\t' || c == '\v' || c == ' ')
    return (1);
  return (0);
   
}

int	count_words(char *str)
{
  int	len;
  int	i;

  i = 0;
  len = 0;
  if (str == NULL)
    rb_xerror("Error : count_words : String pointer is NULL");
  while (str[i] != '\0')
    {
      if (separator(str[i]) == 0)
	{
	  len = len + 1;
	  while (separator(str[i]) == 0 && str[i] != '\0')
	    i = i + 1;
	}
      i = i + 1;
    }
  return (len);
}
