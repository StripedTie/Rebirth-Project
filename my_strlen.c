#include "rb.h"

int	my_strlen(char *str)
{
  int	len;

  if (str == NULL)
    return (-1);
  len = 0;
  while (str[len] != '\0')
    {
      len = len + 1;
    }
  return (len);
}
