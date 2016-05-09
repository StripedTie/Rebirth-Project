#include <stdlib.h>
#include "rb.h"

int	my_char_is_in(char c, char *format)
{
  int	i;
  
  i = 0;
  while (format[i] != c)
    {
      if (format[i] == '\0')
	return (1);
      i = i + 1;
    }
  return (0);  
}

int	rb_strisinformat(char *str, char *format)
{
  int	i_str;

  i_str = 0;
  if (str == NULL || format == NULL)
    rb_xerror("rb_strisinformat : String pointer is NULL");
  while (str[i_str] != '\0')
    {
      if ((my_char_is_in(str[i_str], format)) == 0)
	  i_str = i_str + 1;
      else if ((my_char_is_in(str[i_str], format)) == 1)
	return (0);
    }
  return (1);
}
